/*
 * EtatRobot.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

using namespace std;

class EtatRobot {
protected:
	Robot robot;

public:
	void avancer(int x, int y);
	void tourner(string direction);
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerObstacle(Obstacle o);
	int evaluerObstacle();
	void figer();
	void repartir();
	void afficher();

	class NotPossible{};
};

#endif /* ETATROBOT_H_ */
