#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
#include "Circle.h"
using namespace  std;



double calcDistance(Circle*, Circle*);

bool belongsToCircle(Circle* circle, double x, double y) {
	double circleX = circle->getX();
	double circleY = circle->getY();
	double circleR = circle->getR();
	double dx = sqrt((circleX - x) * (circleX - x) + (circleY - y) * (circleY - y));
	if (dx > circleR)return false;
	return true;
}
int crossingNumber(Circle* c1, Circle* c2) {
	if (c1->getX() == c2->getX() && c1->getY() == c2->getY() && c1->getR() == c2->getR())return 666;
	double dx = calcDistance(c1, c2);
	if (belongsToCircle(c1, c2->getX(), c2->getY()) && c1->getR() > c2->getR()) {
		if (dx + c2->getR() < c1->getR())return 0;
		if (dx + c2->getR() > c1->getR()) return 2;
	}
	if (belongsToCircle(c2, c1->getX(), c1->getY()) && c2->getR() > c1->getR()) {
		if (dx + c1->getR() < c2->getR())return 0;
		if (dx + c1->getR() > c2->getR()) return 2;
	}


	if (dx == c1->getR() + c2->getR())return 1;
	if (dx > c1->getR() + c2->getR())return 0;
	if (dx < c1->getR() + c2->getR())return  2;
}
double calcLength(Circle* c1) {
	return (2 * M_PI * c1->getR());
}
double calcSurface(Circle* c1) {
	return((M_PI  * c1->r *c1->r));
}
double calcDistance(Circle* c1, Circle* c2) {
	return sqrt((c1->getX() - c2->getX()) * (c1->getX() - c2->getX()) + (c1->getY() - c2->getY()) * (c1->getY() - c2->getY()));
}
void moveX(Circle* c1, double l) {
	c1->setX(c1->getX() + l);
}
void moveY(Circle* c1, double l) {
	c1->setY(c1->getY() + l);
}
void increaseSurface(Circle* c1, int k) {
	c1->setR(sqrt(k));
}
ostream& operator<<(ostream& output, Circle& c1) {
	output << endl << c1.info() << endl;
	return output;
}

Circle::~Circle() {
	cout << endl << "Circle deleted" << endl;
}
int main()
{
	//double x1, y1, r1;
	//cin >> x1 >> y1 >> r1;
	Point p1(5, 8);
	Circle c1(p1, 2);
	c1.setX(7).setY(7).setR(1);
	
	Point p2(5, 5);
	p2++;
	--p2;
	p2--;
	Circle c2(p2, 1);
	increaseSurface(&c2, 9);
	cout <<c1<< c2;
	cout << endl << "Circle surface:" << calcSurface(&c2);

	cout << endl<<endl<<endl<<"Circle count:" << c2.createdCirclesCount();
}