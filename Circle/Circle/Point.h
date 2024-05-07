#pragma once
class Point
{
public:
	Point();
	Point(double );
	Point(double , double );
	void setX(double);
	void setY(double);
	double getX();
	double getY();
	void operator++();
	void operator++(int);
	void operator--();
	void operator--(int);
private:
	double _x, _y;
};
