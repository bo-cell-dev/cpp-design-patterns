#pragma once
#include <string>

// Target
class EuropeanCar {
public:
	virtual void plugInCar() = 0;
	virtual ~EuropeanCar() = default;
};