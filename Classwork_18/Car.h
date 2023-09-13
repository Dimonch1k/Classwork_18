#pragma once
#include <iostream>
using namespace std;


#include "Wheel.h"
class Car
{
private:
	Wheel arr[4];

public:
	Car(Wheel w1, Wheel w2, Wheel w3, Wheel w4)
	{
		arr[0] = w1;
		arr[1] = w2;
		arr[2] = w3;
		arr[3] = w4;
	}

	void Move();
	void Stop();

	void display();
};

