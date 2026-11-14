#pragma once
#include "IBeverage.h"
#include <memory>

class CondimentDecorator:public IBeverage {
protected:
	std::unique_ptr<IBeverage> wrappedBeverage;
public:
	CondimentDecorator(std::unique_ptr<IBeverage> beverage) :wrappedBeverage(std::move(beverage)){};
};