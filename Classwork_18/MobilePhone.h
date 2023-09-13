#pragma once
#include <iostream>
using namespace std;

#include "Display.h"
#include "Button_on_off.h"
#include "Camera.h"
#include "Component.h"
class MobilePhone
{
public:
	Component* display = new Display();
	Component* camera = new Camera();
	Component* button_on_off = new Button_on_off();

	
	void showDisplay();

	void on_Light_in_Camera();

	void on_off_Phone();
	


	~MobilePhone()
	{
		delete display;
		delete camera;
		delete button_on_off;
	}
};

