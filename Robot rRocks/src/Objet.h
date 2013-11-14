/*
 * Objet.h
 *
 *  Created on: 14 nov. 2013
 *      Author: eyp
 */

#ifndef OBJET_H_
#define OBJET_H_

class Objet {
private:
	int poids;
public:

	int getPoids() const
	{
		return poids;
	}

	void setPoids(int poids)
	{
		this->poids = poids;
	}
};

#endif /* OBJET_H_ */
