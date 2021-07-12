#pragma once
#include <iostream>
#include "C_Weapon.h"
class C_Manual :
    public C_Weapon
{
public :

    virtual void attack() override {
        std::cout << "You were attacked manual weapons";
    }

    virtual void breakWeapon() override {
        std::cout << "manual weapon broke";
    }

    void protection() {
        std::cout << "You were protection manual weapons";
    }

};

