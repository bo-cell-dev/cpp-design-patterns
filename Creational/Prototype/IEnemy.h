#pragma once
#include <memory>

class IEnemy {
protected:
	int health = 100;
public:
	virtual std::unique_ptr<IEnemy> clone() const = 0;
	virtual void printInfo() const = 0;
	virtual ~IEnemy() = default;
};