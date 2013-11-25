//============================================================================
// Name        : Objet.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================

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
