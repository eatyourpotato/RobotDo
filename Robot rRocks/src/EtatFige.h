/*
 * EtatFige.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef ETATFIGE_H_
#define ETATFIGE_H_

#include "EtatRobot.h"

class EtatFige: public EtatRobot {
private:
	EtatEnRoute ancienEtat;
public:
	EtatFige(EtatEnRoute ancienEtat);//mémoriser l'ancien état avant de figer
	void repartir();
};

#endif /* ETATFIGE_H_ */
