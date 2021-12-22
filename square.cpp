#include "square.h"
#include <iostream>
using namespace std;

void::Square::getPerimeterValues(int a, int b, int c, int d)
{
	side1 = a;
	side2 = b;
	side3 = c;
	side4 = d;
}

int::Square::calculatePerimeter()
{
	return (side1 + side2 + side3 + side4);
}


void::Square::getAreaValues(int x, int y)
{
	width = x;
	height = y;
}

int::Square::calculateArea()
{
	return (height * width);
}