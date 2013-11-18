/*
 * EtatRobot.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

#include "Robot.h"
#include "Objet.h"
#include "Obstacle.h"

class Robot; // Dire au compilo que SIIIIIIIIIIIIIIII cette classe existe bien

class EtatRobot {
protected:
	Robot* robot;

public:
	virtual ~EtatRobot() = default;

	virtual void avancer(int x, int y);
	virtual void tourner(std::string direction);
	virtual void saisir(Objet o);
	virtual void poser();
	virtual int peser();
	virtual void rencontrerObstacle(Obstacle o);
	virtual int evaluerObstacle();
	virtual void figer();
	virtual void repartir();

	class NotPossible{};
};

#endif /* ETATROBOT_H_ */
