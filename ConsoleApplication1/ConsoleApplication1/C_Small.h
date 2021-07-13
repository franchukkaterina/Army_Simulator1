#pragma once
#include "C_Shield.h"
class C_Small : public C_Shield
{
protected:
	int _combustion;
public:
	void breaking() {
		std::cout << "Small shield broken";
	}
	void protect() {
		std::cout << "Protect by small shield";
	}
};
