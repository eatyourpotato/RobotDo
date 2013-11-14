/*
 * EtatFige.cpp
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#include "EtatFige.h"

EtatFige::EtatFige(EtatEnRoute ancienEtat) {
	this->ancienEtat = ancienEtat;
}

void EtatFige::repartir() {
	robot.changerEtat(ancienEtat);

	cout << "Le robot se défige";
}
