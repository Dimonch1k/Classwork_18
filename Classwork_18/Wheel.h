#pragma once
#include <iostream>
using namespace std;


class Wheel
{
private:
	double diametr;
	string type;

public:
	Wheel();
	Wheel(double diametr, string type);

	void move();
	void stop();


	double getDiametr();
	string getType();
};

