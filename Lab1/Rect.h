#pragma once

#include "Coordinates.h"

class Rect {
private:
	int top, left, bottom, right;

public:
	
	Rect();
	Rect(Coordinates topLeft, Coordinates bottomRight);
	Rect(int x1, int y1, int x2, int y2);

	int area();
	void print();
	Rect findUnion(const Rect& lhs,const Rect& rhs);
	Rect input();


};
