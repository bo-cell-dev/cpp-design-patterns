#include "ConcreteDecorators.h"

MilkDecorator::MilkDecorator(std::unique_ptr<IBeverage> beverage): CondimentDecorator(std::move(beverage)) {}

std::string MilkDecorator::getDescription() const {
	return wrappedBeverage->getDescription() + ", Milk";
}

double MilkDecorator::getCost() const {
	return wrappedBeverage->getCost() + 2.0;
}

SugarDecorator::SugarDecorator(std::unique_ptr<IBeverage> beverage): CondimentDecorator(std::move(beverage)) {}

std::string SugarDecorator::getDescription() const {
	return wrappedBeverage->getDescription() + ", Sugar";
}

double SugarDecorator::getCost() const {
	return wrappedBeverage->getCost() + 1.0;
}