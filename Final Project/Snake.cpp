#include<iostream>
#include "Snake.h"

using namespace std;

Snake::Snake() {
	snakeLength = 0;
	curr = &snakeArray[0][0]; 
	x = 7;
	y = 7;

}