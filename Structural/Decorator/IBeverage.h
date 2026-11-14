#pragma once
#include <string>

class IBeverage {
public:
	virtual ~IBeverage() = default;
	virtual std::string getDescription() const = 0;
	virtual double getCost() const = 0;
};