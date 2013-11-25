//============================================================================
// Name        : EtatFige.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include "EtatFige.h"

EtatFige::EtatFige(EtatEnRoute* ancienEtat) : EtatRobot() {
	this->ancienEtat = ancienEtat;
}

void EtatFige::repartir(Robot* robot) {
	robot->changerEtat(ancienEtat);

	std::cout << "Le robot se défige";
}

