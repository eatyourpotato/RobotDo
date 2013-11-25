//============================================================================
// Name        : Obstacle.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#ifndef OBSTACLE_H_
#define OBSTACLE_H_

class Obstacle {
private:
	int hauteur;
public:
	Obstacle(int hauteur);
	int getHauteur() const {
		return hauteur;
	}

	void setHauteur(int hauteur) {
		this->hauteur = hauteur;
	}

};

#endif /* OBSTACLE_H_ */
