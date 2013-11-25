//============================================================================
// Name        : EtatEnRoute.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include "EtatEnRoute.h"
#include "EtatFige.h"

void EtatEnRoute::figer(Robot* robot) {
	EtatFige* etat = new EtatFige(this);
	cout << "le robot est figé" << endl;
	robot->changerEtat(etat);
}
