#include "Car.h"



void Car::Move()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Wheel " << i + 1 << ": ";
		arr[i].move();
	}
	cout << "\n\n";
}

void Car::Stop()
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Wheel " << i + 1 << ": ";
		arr[i].stop();
	}
	cout << "\n\n";
}


void Car::display()
{
	cout << "Wheels:\n\n\t";
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << " Wheel:\n";
		cout << "\tDiametr: " << arr[i].getDiametr();
		cout << "\n\tType: " << arr[i].getType() << "\n\n\n";
	}
	cout << "\n\n";
}