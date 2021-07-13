#pragma once
class C_Armor
{
protected:
	int strength;
	float weight;
	virtual void breakArmor() = 0;
public:
	C_Armor():strength(0),weight(0){}
	virtual void TakeHit(int impact_power) {
		this->strength -= impact_power;
		if (strength<=0)
		{
			breakArmor();
		}
	}
	
	virtual void getHP() = 0;
};

