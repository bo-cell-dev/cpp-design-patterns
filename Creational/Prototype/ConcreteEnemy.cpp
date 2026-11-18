#include"ConcreteEnemy.h"
#include <iostream>

std::unique_ptr<IEnemy> Orc::clone() const {
	return std::make_unique<Orc>(*this);
}
void Orc::printInfo() const{
	std::cout << "health: " << health << " name: " << name << std::endl;
}

void Orc::setName(std::string newName) {
	name = newName;
}

std::unique_ptr<IEnemy> Dragon::clone() const {
	return std::make_unique<Dragon>(*this);
}
void Dragon::printInfo() const {
	std::cout << "health: " << health << " firepower: " << firePower <<std::endl;
}