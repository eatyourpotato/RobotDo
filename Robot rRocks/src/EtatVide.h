//============================================================================
// Name        : EtatVide.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#ifndef ETATVIDE_H_
#define ETATVIDE_H_

#include "EtatEnRoute.h"

class EtatVide: public EtatEnRoute {
	void avancer(int x, int y);
	void tourner(string direction);
	void rencontrerObstacle(Obstacle* o);
};

#endif /* ETATVIDE_H_ */
