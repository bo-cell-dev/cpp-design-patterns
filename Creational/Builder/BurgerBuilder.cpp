#include "BurgerBuilder.h"

BurgerBuilder& BurgerBuilder::addBun() {
    burger.ingredients.push_back("bun");
    return *this;
}
BurgerBuilder& BurgerBuilder::addMeat() {
    burger.ingredients.push_back("meat");
    return *this;
}

BurgerBuilder& BurgerBuilder::addCheese() {
    burger.ingredients.push_back("cheese");
    return *this;
}

BurgerBuilder& BurgerBuilder::addBacon() {
    burger.ingredients.push_back("bacon");
    return *this;
}

Burger BurgerBuilder::build() {
    return burger;
}