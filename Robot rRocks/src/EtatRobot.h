//============================================================================
// Name        : EtatRobot.h
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

#include "Robot.h"
#include "Objet.h"
#include "Obstacle.h"

class Robot; // Dire au compilo que SIIIIIIIIIIIIIIII cette classe existe bien

class EtatRobot {

public:

	virtual ~EtatRobot() = default;


	virtual void avancer(int x, int y);
	virtual void tourner(std::string direction);
	virtual void saisir(Objet* o);
	virtual void poser();
	virtual void peser();
	virtual void rencontrerObstacle(Obstacle* o);
	virtual void evaluerObstacle();
	virtual void figer(Robot* robot);
	virtual void repartir(Robot* robot);

	class NotPossible{};
};

#endif /* ETATROBOT_H_ */
