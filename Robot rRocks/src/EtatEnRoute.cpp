/*
 * EtatEnRoute.cpp
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#include "EtatEnRoute.h"
#include "EtatFige.h"

void EtatEnRoute::figer() {
	EtatFige* etat = new EtatFige(this);
	robot->changerEtat(etat);
}
