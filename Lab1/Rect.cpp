#include<iostream>

#include "Rect.h"

using namespace std;

Rect::Rect() {
	top = 0;
	left = 0;
	bottom = 0;
	right = 0;

}

Rect::Rect(Coordinates topLeft, Coordinates bottomRight) {
	left = topLeft.x;
	top = topLeft.y;
	right = bottomRight.x;
	bottom = bottomRight.y;

}

Rect::Rect(int x1, int y1, int x2, int y2) {
	left = x1;
	top = y1;
	right = x2;
	bottom = y2;

}
int Rect::area() {
	int area;
	area = ( (right - left)*(top - bottom) );
	if (area < 1) 
	{
		area = area*-1;
	}

	return area;

}

void Rect::print() {

	cout << "The coordinates are (" << left << "," << top << ") and (" << right << "," << bottom << ")" << endl;
	cout << "The area of this rectangle is " << area() << endl;
	cout << endl;

}

Rect Rect::findUnion(const Rect& lhs, const Rect& rhs) {
    int top1, left1, bottom1, right1;

	if(lhs.top > rhs.top)
	{
		top1 = lhs.top;
	}
	else top1 = rhs.top;

	if (lhs.left < rhs.left)
	{
		left1 = lhs.left;
	}
	else left1 = rhs.left;

	if (rhs.bottom < lhs.bottom)
	{
		bottom1 = rhs.bottom;
	}
	else bottom1 = lhs.bottom;

	if (rhs.right > lhs.right)
	{
		right1 = rhs.right;
	}
	else right1 = lhs.right;


	return Rect(left1, top1, right1, bottom1);
}

Rect Rect::input() {
	int top1, left1, bottom1, right1;

	cout << "Enter the coordinates of your rectangle in the format x1, y1, x2, y2 " << endl;
	cin >> top1 >> left1 >> bottom1 >> right1;
	cout << endl;

	return Rect(top1, left1, bottom1, right1);
}

