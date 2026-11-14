#pragma once
#include "CondimentDecorator.h"

class MilkDecorator: public CondimentDecorator {
public:
	MilkDecorator(std::unique_ptr<IBeverage> beverage);
	std::string getDescription() const override;
	double getCost() const override;
};

class SugarDecorator: public CondimentDecorator {
public:
	SugarDecorator(std::unique_ptr<IBeverage> beverage);
	std::string getDescription() const override;
	double getCost() const override;
};