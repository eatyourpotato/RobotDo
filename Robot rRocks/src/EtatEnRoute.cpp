/*
 * EtatEnRoute.cpp
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#include "EtatEnRoute.h"

void EtatEnRoute::figer() {
	robot.changerEtat(EtatFige(*this));
}
