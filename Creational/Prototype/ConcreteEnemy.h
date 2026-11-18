#pragma once 
#include "IEnemy.h"
#include <string>

class Orc: public IEnemy {
private:
	std::string name = "orc";
public:
	std::unique_ptr<IEnemy> clone() const override;
	void printInfo() const override;
	void setName(std::string newName);
};

class Dragon: public IEnemy {
private:
	int firePower = 50;
public:
	std::unique_ptr<IEnemy> clone() const override;
	void printInfo() const override;
};