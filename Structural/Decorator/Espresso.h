#pragma once
#include "IBeverage.h"

class Espresso: public IBeverage {
public:
	std::string getDescription() const override;
	double getCost() const override;
};