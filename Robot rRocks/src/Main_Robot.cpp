//============================================================================
// Name        : Robot.cpp
// Author      : Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include "Robot.h"

using namespace std;

int main() {
	Robot r;
	cout << "le robot peut avancer" << endl;
	r.avancer(2, 2);

	cout << "le robot ne peut pas évaluer d'obstacle" << endl;
	r.evaluerObstacle();

	cout << "le robot peut rencontrer un obstacle" << endl;
	r.rencontrerObstacle(new Obstacle(4));

	cout << "le robot peut évaluer l'obstacle" << endl;
	cout << "l'obstacle mesure " << r.evaluerObstacle() << endl;

	cout << "le robot peut être figé" << endl;
	r.figer();
	cout << "le robot ne peut pas être figé" << endl;
	r.figer();


	return 0;
}
