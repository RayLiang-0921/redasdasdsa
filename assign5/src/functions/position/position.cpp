#include "position.h"
#include "../../controller/enviroment.h"

Position :: Position(int initialPositionX, int initialPositionY) : positionX(initialPositionX), positionY(initialPositionY){}

Position :: Position(){}

Position :: ~Position(){}

int Position :: getX(){
	return positionX;
}

int Position :: getY(){
	return positionY;

}

bool Position :: operator==(const Position &other) const{
	return (other.positionX == positionX && other.positionY == positionY);
}


// Add your code to implement the Position class here.
