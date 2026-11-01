#pragma once
#include "AttackStrategy.h"

class SwordAttack: public AttackStrategy {
public:
	void attack() override;
};