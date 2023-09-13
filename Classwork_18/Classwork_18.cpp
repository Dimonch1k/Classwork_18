#include <iostream>
using namespace std;




// Task 1

/*
#include "MobilePhone.h"
#include "Component.h"


int main()
{
	MobilePhone phone;

	phone.on_off_Phone();

	phone.showDisplay();
	 
	phone.on_Light_in_Camera();
}*/




// Task 2

/*
#include "Car.h"
#include "Wheel.h"

int main()
{
	Wheel w1(5, "Sport");
	Wheel w2(5, "Sport");
	Wheel w3(3, "OffFoad");
	Wheel w4(3, "OffFoad");

	Car car(w1, w2, w3, w4);

	car.Move();
	car.Stop();

	car.display();

}*/





// Task 3

/**/

#include "Drawing.h"
#include "Shape.h"

#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
	// Create different shapes and parametrs

	Shape* rec1 = new Rectangle(5, 6);
	Shape* rec2 = new Rectangle(2, 9);

	Shape* tri1 = new Triangle(4, 4);
	Shape* tri2 = new Triangle(7, 9);

	Shape* circle = new Circle(5);


	
	

	// Add Shapes to vector

	Drawing draw;

	draw.addShape(rec1); // Add 1 rectangle
	draw.addShape(rec2); // Add 2 rectangle
	draw.totalArea();

	draw.addShape(tri1); // Add 1 triangle 
	draw.addShape(tri2); // Add 2 triangle
	draw.totalArea();


	draw.addShape(circle); // Add Circle
	draw.totalArea();




}