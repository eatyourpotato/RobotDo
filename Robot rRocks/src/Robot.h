/*
 * Robot.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include <string>
#include <iostream>

#include "EtatRobot.h"
#include "Position.h"
#include "Objet.h"
#include "Obstacle.h"

using namespace std;

class EtatRobot; // pour faire plaisir au compilo qui ne trouve pas EtatRobot

class Robot {
private:
	std::string Direction;
	EtatRobot* etatCourant;
	Position position;
	Objet objet;
	Obstacle obstacle;

public:
	Robot();

	void avancer(int x, int y);
	void tourner(std::string direction);
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerObstacle(Obstacle o);
	int evaluerObstacle();
	void figer();
	void repartir();
	void afficher();

	void changerEtat(EtatRobot* e);
};

#endif /* ROBOT_H_ */
