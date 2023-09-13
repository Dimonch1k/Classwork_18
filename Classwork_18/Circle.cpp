#include "Circle.h"


Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::area()
{
	return PI * pow(radius, 2);
}