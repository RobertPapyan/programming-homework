#include "Point.h"
#include <iostream>

	Point::Point():Point(1,1) {}
	Point::Point(double x):Point(x,x) {}


	Point::Point(double x, double y) {
		this->_x = x;
		this->_y = y;
	}

	void Point::setX(double x) {
		this->_x = x;
	}
	void Point::setY(double y) {
		this->_y = y;
	}
	double Point::getX() {
		return this->_x;
	}
	double Point::getY() {
		return this->_y;
	}

	void Point::operator++() {
		this->setX(this->getX() + 1);
		this->setY(this->getY() + 1);
	}
	void Point::operator++(int) {
		std::cout << std::endl << "Post incrementing operator used: " << std::endl;
		this->setX(this->getX() + 1);
		this->setY(this->getY() + 1);
	}
	void Point::operator--() {
		this->setX(this->getX() - 1);
		this->setY(this->getY() - 1);
	}
	void Point::operator--(int) {
		std::cout << std::endl << "Post decrementing operator used: " << std::endl;
		this->setX(this->getX() - 1);
		this->setY(this->getY() - 1);
	}