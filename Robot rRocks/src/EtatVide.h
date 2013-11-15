/*
 * EtatVide.h
 *
 *  Created on: 15 nov. 2013
 *      Author: eyp
 */

#ifndef ETATVIDE_H_
#define ETATVIDE_H_

#include "EtatEnRoute.h"

class EtatVide: public EtatEnRoute {
	void avancer(int x, int y);
	void tourner(string direction);
	void rencontrerObstacle(Obstacle o);
};

#endif /* ETATVIDE_H_ */
