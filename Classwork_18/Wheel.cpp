#include "Wheel.h"


Wheel::Wheel()
{
	diametr = 0.0;
	type = "";
}

Wheel::Wheel(double diametr, string type)
{
	this->diametr = diametr;
	this->type = type;
}



void Wheel::move()
{
	cout << "move.\n";
}


void Wheel::stop()
{
	cout << "stopped.\n";
}


double Wheel::getDiametr()
{
	return diametr;
}

string Wheel::getType()
{
	return type;
}