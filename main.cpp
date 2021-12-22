#include "square.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main()
{
	Square square;
	Square square2;
	Triangle triangle;
	Triangle triangle2;
	square.getAreaValues(15, 15);
	square.getPerimeterValues(15, 15, 15, 15);
	cout << "The area of this square is " << square.calculateArea() << "." << "\n";
	cout << "The perimeter of this square is " << square.calculatePerimeter() << "." << "\n";
	square2.getAreaValues(17, 15);
	square2.getPerimeterValues(17, 15, 17, 15);
	cout << "The area of this square is " << square2.calculateArea() << "." << "\n";
	cout << "The perimeter of this square is " << square2.calculatePerimeter() << "." << "\n";
	triangle.getAreaValues(13, 6);
	triangle.getPerimeterValues(13, 15, 9);
	cout << "The area of this triangle is " << triangle.calculateArea() << "." << "\n";
	cout << "The perimeter of this triangle is " << triangle.calculatePerimeter() << "." << "\n";
	triangle2.getAreaValues(17, 8);
	triangle2.getPerimeterValues(17, 21, 14);
	cout << "The area of this triangle is " << triangle2.calculateArea() << "." << "\n";
	cout << "The perimeter of this triangle is " << triangle2.calculatePerimeter() << "." << "\n";
	return 0;
}