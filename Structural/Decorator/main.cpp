#include "Espresso.h"
#include "ConcreteDecorators.h"
#include <iostream>
#include <memory>

void print(std::unique_ptr<IBeverage>& element) {
	std::cout << element->getDescription() << element->getCost();
	std::cout << std::endl;
}

int main() {
	std::unique_ptr<IBeverage> coffee = std::make_unique<Espresso>();
	print(coffee);

	coffee = std::make_unique<MilkDecorator>(std::move(coffee));
	print(coffee);

	coffee = std::make_unique<SugarDecorator>(std::move(coffee));
	print(coffee);

	return 0;
}