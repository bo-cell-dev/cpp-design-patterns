#pragma once
#include <iostream>

class AttackStrategy {
public:
	virtual ~AttackStrategy() = default;
	virtual void attack() = 0;
};