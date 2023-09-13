#pragma once
#include <iostream>
using namespace std;


#include "Component.h"
class Camera :
    public Component
{
    void action() override;
};

