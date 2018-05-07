#include "space.h"

/*class Space {
	friend class Field;
	bool isBomb;
	bool isFlagged;
	bool isOnCursor;
	bool isCleared;
	int numAround;
	int xPos;
	int yPos;
	int zPos;
public:
*/

Space::Space(){
	//std::cout << "lets make a space" << std::endl;
	isBomb = false;
	isFlagged = false;
	isOnCursor = false;
	isCleared = false;
	numAround = 0;
	xPos = 0;
	yPos = 0;
	zPos = 0;
}

void Space::setLoc(int x, int y, int z){
	//std::cout << "making a new cell" << std::endl;
	xPos = x;
	yPos = y;
	zPos = z;
}

void Space::setNoBombManual(){
	isBomb = false;
}

void Space::setBomb(int nB, int nS ){
	double sL; //spaces left
	double bL;
	double probBomb;
	double rng; //rolls to see if it will be a bomb
	sL = ((double) nS);
	bL = ((double) nB);
	probBomb = bL/sL;
	rng = ((double) rand() / (RAND_MAX));
	if(rng<probBomb)
	{
		isBomb = true;
	}	
}

bool Space::getIsBomb(){
	return isBomb;
}
	
bool Space::getIsFlagged(){
	return isFlagged;
}

bool Space::getIsOnCursor(){
	return isOnCursor;
}

bool Space::getIsCleared(){
	return isCleared;
}

int  Space::getX(){
	return xPos;
}

int Space::getY(){
	return yPos;
}

int Space::getZ(){
	return zPos;
}

int Space::checkNumAround(){
	if (xPos == 0 || xPos == 7){
		if (yPos == 0 || yPos == 7){
			if (zPos == 0 || zPos == 7){
				return 8;
			}
		return 12;	
		}
		if (zPos == 0 || zPos == 7){
			return 12;
		}
	return 18;
	} 
	if (yPos == 0 || yPos == 7){
		if (zPos == 0 || zPos == 7){
			return 12;
		}
	return 18;
	}
	if (zPos == 0 || zPos == 7){
		return 18;
	}
	return 27;
}
//void setNum(Space *a[3][3][3]);
void Space::getCleared()
{

}

void Space::getFlagged()
{

}


