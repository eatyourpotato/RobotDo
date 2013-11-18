/*
 * EtatFige.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ETATFIGE_H_
#define ETATFIGE_H_

#include "EtatRobot.h"
#include "EtatEnRoute.h"
#include <iostream>

class EtatFige: public EtatRobot {
private:
	EtatEnRoute* ancienEtat;
public:
	EtatFige(EtatEnRoute* ancienEtat); // Mémoriser l'ancien état pour le conserver
	void repartir();
};

#endif /* ETATFIGE_H_ */
