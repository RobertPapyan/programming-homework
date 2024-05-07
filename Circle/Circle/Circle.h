#include <string>
#include "Point.h"
class Circle
{
public:
	Circle(Point, double);
	Circle(double);
	Circle& setX(double);
	Circle& setY(double);
	Circle& setR(double);
	void setPoint(double, double);
	double getX();
	double getY();
	double getR();
	int createdCirclesCount();
	std::string info();
	friend double calcSurface(Circle* c);
	~Circle();
	static int _count;
	friend std::ostream& operator<<(std::ostream&,Circle&);

private:
	double  r;
	Point point;
	
};
