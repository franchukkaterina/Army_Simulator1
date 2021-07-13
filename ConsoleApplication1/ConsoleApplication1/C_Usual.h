#pragma once
#include "C_Shield.h"
class C_Usual :
    public C_Shield
{
    virtual void protect() override{
        std::cout << "you are protected by a usual shield";
    }
};

