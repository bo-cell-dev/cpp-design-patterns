#pragma once
#include "Burger.h"

class BurgerBuilder {
private:
	Burger burger;
public:
	BurgerBuilder& addBun();
	BurgerBuilder& addMeat();
    BurgerBuilder& addCheese();
    BurgerBuilder& addBacon();
    Burger build();
};