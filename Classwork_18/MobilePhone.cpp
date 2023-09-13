#include "MobilePhone.h"


void MobilePhone::showDisplay()
{
	display->action();
}

void MobilePhone::on_Light_in_Camera()
{
	camera->action();
}

void MobilePhone::on_off_Phone()
{
	button_on_off->action();
}