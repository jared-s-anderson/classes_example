#include "triangle.h"
#include <iostream>
using namespace std;

void::Triangle::getPerimeterValues(int a, int b, int c)
{
	side1 = a;
	side2 = b;
	side3 = c;
}

int::Triangle::calculatePerimeter()
{
	return side1 + side2 + side3;
}

void::Triangle::getAreaValues(int x, int y)
{
	base = x;
	height = y;
}

int::Triangle::calculateArea()
{
	return (base * height) / 2;
}