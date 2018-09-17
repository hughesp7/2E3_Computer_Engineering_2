#include "Food.h"

Food::Food() {
	srand(time(0));
	x = rand() % 14;
	srand(time(0));
	y = rand() % 14;


}

void Food::newFood() {
	srand(time(0));
	x = rand() % 14;
	srand(time(0));
	y = rand() % 14;




}