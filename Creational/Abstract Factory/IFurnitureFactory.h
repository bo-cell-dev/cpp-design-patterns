#pragma once
#include <memory>
#include "IFurniture.h"

class IFurnitureFactory {
public:
	virtual std::unique_ptr<IChair> createChair() const = 0;
	virtual std::unique_ptr<ITable> createTable() const = 0;
};