#pragma once
#include "EuropeanCar.h"
#include "TeslaCar.h"

class AmericanCarAdapter: public EuropeanCar {
private:
	TeslaCar* car;
public:
	AmericanCarAdapter(TeslaCar* car);
	void plugInCar() override;
};