#pragma once
#include <iostream>
#include "C_Armor.h"
class C_Hard :
    public C_Armor
{
protected:
    virtual void breakArmor(){
        delete this;
    }
public:
    virtual void getHP() {
        std::cout << "You are wearing hard armor";
    }
};

