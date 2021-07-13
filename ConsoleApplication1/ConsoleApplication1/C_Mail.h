#pragma once
#include "C_Hard.h"
class C_Mail :
    public C_Hard
{
/*protected:
	int strength;
	float weight;
	virtual void breakArmor() = 0;*/
public:
	void TakeHit(int impact_power) {
		C_Hard::TakeHit(impact_power);
	}
	C_Mail() :strength(10), weight(10) {}
	virtual void TakeHit(int impact_power) {
		this->strength -= impact_power;
		if (strength <= 0)
		{
			breakArmor();
		}
	}

};

