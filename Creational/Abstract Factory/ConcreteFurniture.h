#pragma once
#include "IFurnitureFactory.h"
#include "IFurniture.h"

class VictorianChair: public IChair {
	void sitOn() const override;
};

class VictorianTable: public ITable {
	void putCoffee() const override;
};

class ModernChair: public IChair {
	void sitOn() const override;
};

class ModernTable: public ITable {
	void putCoffee() const override;
};