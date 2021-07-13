#pragma once
#include <iostream>
#include "C_Armor.h"
class C_Light :
    public C_Armor
{
protected:
    virtual void breakArmor()override {
        delete this;
    }
public:
    void TakeHit(int impact_power) {
        C_Armor::TakeHit(impact_power);
    }
    virtual void getHP()override{
        std::cout << "You are wearing light armor";
    }

};

