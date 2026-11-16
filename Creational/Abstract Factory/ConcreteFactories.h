#pragma once
#include "IFurnitureFactory.h"
#include "ConcreteFurniture.h"

class VictorianFactory: public IFurnitureFactory {
public:
	std::unique_ptr<IChair> createChair() const override;
	std::unique_ptr<ITable> createTable() const override;
};

class ModernFactory: public IFurnitureFactory {
public:
	std::unique_ptr<IChair> createChair() const override;
	std::unique_ptr<ITable> createTable() const override;
};