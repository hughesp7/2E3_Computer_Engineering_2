#include<iostream>

#include"Coordinates.h"
#include"Rect.h"

using namespace std;

int main() {
	Coordinates topLeft, bottomRight;
	Rect first, second, union_found, third, fourth, union_found2;

	topLeft = Coordinates(2, 3);
	bottomRight = Coordinates(4, 1);

	first = Rect(1, 2, 3, 1);
	second = Rect(topLeft, bottomRight);

	first.print();
	second.print();

	union_found = first.findUnion(first, second);

	union_found.print();

	third = third.input();
	fourth = fourth.input();

	third.print();
	fourth.print();

	union_found2 = third.findUnion(third, fourth);

	union_found2.print();
	
	return 0;
}