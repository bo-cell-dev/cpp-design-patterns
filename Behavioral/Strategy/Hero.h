#pragma once
#include "AttackStrategy.h"

class Hero {
private:
	AttackStrategy* currentStrategy;
public:
	Hero(AttackStrategy* initialStrategy);
	void setStrategy(AttackStrategy* newStrategy);
	void performAttack();
};