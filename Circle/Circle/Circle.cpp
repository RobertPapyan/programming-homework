#include "Circle.h"
#include <iostream>

int Circle::_count = 0;
Circle::Circle(double r) :Circle(Point(r,r),r){}

Circle::Circle(Point p, double r) {
	
	r < 0 ? r = -r : r = r;
	if (r > p.getX() || r > p.getY()) {
		p.getX() > p.getY() ? this->r = p.getY() : this->r = p.getX();
	}
	else {
		this->r = r;
	}
	this->point = p;
	_count++;
}
double Circle::getX() {
	return this->point.getX();
}
double Circle::getY() {
	return this->point.getY();
}
double Circle::getR() {
	return this->r;
}
Circle& Circle::setX(double x) {
	if (x <= 0)return *this;
	if (x < this->r)return *this;
	this->point.setX(x);
	return *this;
}
Circle& Circle::setY(double y) {
	if (y <= 0)return *this;
	if (y < this->r)return *this;
	this->point.setY(y);
	return *this;
}
Circle& Circle::setR(double r) {
	if (r <= 0)return *this;
	if (r > this->point.getY() || r > this->point.getX())return *this;
	this->r = r;
	return *this;
}
std::string Circle::info() {
	return "X = " + std::to_string(this->point.getX()) + ", Y = " + std::to_string(this->point.getY()) + ", R  = " + std::to_string(this->r);
}

int Circle::createdCirclesCount() {
	return this->_count;
}
void Circle::setPoint(double x , double y) {
	this->setX(x);
	this->setY(y);
}

