#ifndef AFFICHEURROBOT_H_
#define AFFICHEURROBOT_H_

#include "Afficheur.h"
#include "Robot.h"
#include <iostream>

class AfficheurRobot: public Afficheur{
public:
	void afficher(Robot* r){
		cout << "******************Robot*****************************" << endl;
//		cout << "Etat courant: " << r.getEtatCourant() << endl;
		cout << "Position: (" << r->getPosition()->getX() << ", "
		<<  r->getPosition()->getY() << ")" << endl;
		cout << "Direction" << r->getDirection() << endl;
		//à compléter
		cout << "****************************************************" << endl;
	}
};

#endif