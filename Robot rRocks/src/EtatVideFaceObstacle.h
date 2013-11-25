//============================================================================
// Name        : EtatVideFaceObstacle.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#ifndef ETATVIDEO_H_
#define ETATVIDEO_H_

#include "EtatEnRoute.h"

class EtatVideFaceObstacle: public EtatEnRoute {
	void tourner(string direction);
	void saisir(Objet* o);
	void evaluerObstacle();
};

#endif /* ETATVIDE_H_ */
