#include "Burger.h"

void Burger::show() const {
	std::cout << "\nBurger: \n" << std::endl;
	for (auto& ingredient : ingredients) {
		std::cout << ingredient << std::endl;
	}
}