/*
 * Obstacle.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 *
 *      efsfesf
 */

#ifndef OBSTACLE_H_
#define OBSTACLE_H_

class Obstacle {
private:
	int hauteur;
public:
	int getHauteur() const {
		return hauteur;
	}

	void setHauteur(int hauteur) {
		this->hauteur = hauteur;
	}

};

#endif /* OBSTACLE_H_ */
