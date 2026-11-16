#include "ConcreteFactories.h"

std::unique_ptr<IChair> VictorianFactory::createChair() const {
    return std::make_unique<VictorianChair>();
}

std::unique_ptr<ITable> VictorianFactory::createTable() const {
    return std::make_unique<VictorianTable>();
}

std::unique_ptr<IChair> ModernFactory::createChair() const {
    return std::make_unique<ModernChair>();
}

std::unique_ptr<ITable> ModernFactory::createTable() const {
    return std::make_unique<ModernTable>();
}