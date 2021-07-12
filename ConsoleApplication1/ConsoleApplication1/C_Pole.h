#pragma once
#include <iostream>
#include "C_Weapon.h"
class C_Pole :
    public C_Weapon
{
public:
    virtual void attack() override {
        std::cout << "You were attacked polearm weapons";
    }
    virtual void breakWeapon() override {
        std::cout << "polearms broke";
    }
    void burn() {
        std::cout << "You were attacked polearm weapons";
    }
};

