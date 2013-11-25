//============================================================================
// Name        : Position.cpp
// Author      : Jiachen Nie - Guillaume Lestel
// Version     :
// Copyright   : Your copyright notice
//============================================================================


#ifndef POSITION_H_
#define POSITION_H_

class Position {
private:
	int x;
	int y;
public:
	Position(){}

	Position(int x, int y);

	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}
};

#endif /* POSITION_H_ */
