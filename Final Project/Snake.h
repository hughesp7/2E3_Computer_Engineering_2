#pragma once
#include<iostream>
#include "Coordinates.h"

using namespace std;

class Snake :public Coordinates
{
private:
	 int snakeLength;
	 int snakeArray[2][255];
	 int *curr;
	 //curr = snakeArray;
public:
	Snake();
	int* getArray(){ return curr; }
	int getSnakeLength(){ return snakeLength; }
	void snakeLengthAddOne() { snakeLength++; }
};
