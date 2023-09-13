#pragma once
#include <iostream>
using namespace std;


#include "Component.h"
class Display :
    public Component
{
    void action() override;
};

