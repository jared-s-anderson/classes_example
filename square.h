#ifndef square_h
#define square_h

class Square
{
private:
	int height;
	int width;
	int side1;
	int side2;
	int side3;
	int side4;
public:
	void getPerimeterValues(int, int, int, int);
	int calculatePerimeter();
	void getAreaValues(int, int);
	int calculateArea();
};
#endif /*square_h*/