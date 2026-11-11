#include <iostream>
#include "OrcsAI.h"
#include "MonstersAI.h"

int main() {
	OrcsAI orcs;
	MonstersAI monsters;

	std::cout << "Orcs turn:\n";
	orcs.takeTurn();

	std::cout << "Monsters turn:\n";
	monsters.takeTurn();


	return 0;
}