//============================================================================
// Name        : Robot.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================


#include "Robot.h"
#include "EtatVide.h"
#include  "EtatVideFaceObstacle.h"

Robot::Robot()	{
	obstacle = NULL;
	position = Position();
	Direction = "S";
	etatCourant = new EtatVide();
}

void Robot::avancer(int x, int y) {
	try{
		etatCourant->avancer(x, y);
		position.setX(x);
		position.setY(y);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::tourner(string direction) {
	try{
		etatCourant->tourner(direction);
		this->Direction = direction;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::saisir(Objet* o) {
	try{
		etatCourant->saisir(o);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::poser() {
	try{
		etatCourant->poser();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

int Robot::peser() {
	try{
		etatCourant->peser();
		return objet->getPoids();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
	return -1;
}

void Robot::rencontrerObstacle(Obstacle* o) {
	try{
		etatCourant->rencontrerObstacle(o);
//		delete etatCourant;
		etatCourant = new EtatVideFaceObstacle();
		this->obstacle = o;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

int Robot::evaluerObstacle() {
	try{
		etatCourant->evaluerObstacle();
		return obstacle->getHauteur();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
		return -1;
	}
}

void Robot::figer() {
	try{
		etatCourant->figer(this);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::repartir() {
	try{
		etatCourant->repartir(this);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::afficher() {
	if (etatCourant == NULL)	{
		cout << "test wrong" << endl;
	}

}

void Robot::changerEtat(EtatRobot* e) {
	try{
		cout << "le robot change d'état" << endl;
		afficher();
		this->etatCourant = e;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}
