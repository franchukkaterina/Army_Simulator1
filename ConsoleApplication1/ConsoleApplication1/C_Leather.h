#pragma once
#include "C_Light.h"
class C_Leather :
    public C_Light
{
    void TakeHit(int impact_power) {
        C_Light::TakeHit(impact_power);
    }
};

