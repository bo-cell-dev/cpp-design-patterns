#include "Hero.h"

Hero::Hero(AttackStrategy* initialStrategy): currentStrategy(initialStrategy){}

void Hero::setStrategy(AttackStrategy* newStrategy) {
	currentStrategy = newStrategy;
}

void Hero::performAttack() {
	currentStrategy->attack();
}