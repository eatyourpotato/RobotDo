//============================================================================
// Name        : EtatFige.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

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
	void repartir(Robot* robot);
};

#endif /* ETATFIGE_H_ */
