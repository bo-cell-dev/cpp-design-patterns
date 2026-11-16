#pragma once
#include "IFurnitureFactory.h"

class IChair{
public:
	virtual ~IChair() = default;
	virtual void sitOn() const = 0;
};

class ITable {
public:
	virtual ~ITable() = default;
	virtual void putCoffee() const = 0;
};