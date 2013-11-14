/*
 * Robot.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ROBOT_H_
#define ROBOT_H_

using namespace std;

class Robot {
private:
	string Direction;
	EtatRobot etatCourant;
	Position position;
	Objet objet;
	Obstacle obstacle;

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

	void changerEtat(EtatRobot e);
};

#endif /* ROBOT_H_ */
