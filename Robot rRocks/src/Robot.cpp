/*
 * Robot.cpp
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#include "Robot.h"

void Robot::avancer(int x, int y) {
	etatCourant.avancer(x, y);
}

void Robot::tourner(string direction) {
	etatCourant.tourner(direction);
}

void Robot::saisir(Objet o) {
	etatCourant.saisir(o);
}

void Robot::poser() {
	etatCourant.poser();
}

int Robot::peser() {
	return etatCourant.peser();
}

void Robot::rencontrerObstacle(Obstacle o) {
	etatCourant.rencontrerObstacle(o);
}

int Robot::evaluerObstacle() {
	return etatCourant.evaluerObstacle();
}

void Robot::figer() {
	etatCourant.figer();
}

void Robot::repartir() {
	etatCourant.repartir();
}

void Robot::afficher() {
	etatCourant.afficher();
}

void Robot::changerEtat(EtatRobot e) {
	etatCourant = e;
}
