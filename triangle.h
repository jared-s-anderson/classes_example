#ifndef triangle_h
#define triangle_h

class Triangle
{
private:
	int height;
	int base;
	int side1;
	int side2;
	int side3;
public:
	void getPerimeterValues(int, int, int);
	int calculatePerimeter();
	void getAreaValues(int, int);
	int calculateArea();
};
#endif /*triangle_h*/