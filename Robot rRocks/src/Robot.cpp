/*
 * Robot.cpp
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#include "Robot.h"

void Robot::avancer(int x, int y) {
	try{
		etatCourant.avancer(x, y);
		position.setX(x);
		position.setY(y);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::tourner(string direction) {
	try{
		etatCourant.tourner(direction);
		this->Direction = direction;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::saisir(Objet o) {
	try{
		etatCourant.saisir(o);
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::poser() {
	try{
		etatCourant.poser();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

int Robot::peser() {
	try{
		return etatCourant.peser();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
	return -1;
}

void Robot::rencontrerObstacle(Obstacle o) {
	try{
		etatCourant.rencontrerObstacle(o);
		this->obstacle = o;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

int Robot::evaluerObstacle() {
	try{
		return etatCourant.evaluerObstacle();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
		return -1;
}

void Robot::figer() {
	try{
		etatCourant.figer();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::repartir() {
	try{
		etatCourant.repartir();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::afficher() {
	try{
		etatCourant.afficher();
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}

void Robot::changerEtat(EtatRobot e) {
	try{
		etatCourant = e;
	} catch(EtatRobot::NotPossible e)	{
		cout << "operation non possible" << endl;
	}
}
