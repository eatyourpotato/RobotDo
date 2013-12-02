
#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include "Robot.h"
#include "ElementARepresenter.h"

class Robot;
class ElementARepresenter;

//classe abstraite
class Afficheur{
public:
	virtual void afficher(ElementARepresenter*) = 0;
};

#endif