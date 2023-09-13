#pragma once
#include <iostream>
using namespace std;


#include "Component.h"
class Button_on_off :
    public Component
{
public:
    void action() override;
};

