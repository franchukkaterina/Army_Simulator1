#pragma once
#include <iostream>
#include "C_Weapon.h"
class C_Rifle :
    public C_Weapon
{
public:
    virtual void attack() override {
        std::cout << "You were attacked rifle weapons";
    }
    virtual void breakWeapon() override {
        std::cout << "rifle weapon broke";
    }
    void loadWeapons() {
        std::cout << "You loaded your weapon";
    }
};

