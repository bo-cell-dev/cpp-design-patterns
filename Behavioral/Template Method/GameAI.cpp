#include "GameAI.h"
#include <iostream>

void GameAI::takeTurn() {
	collectResources();
	buildStructures();
	buildUnits();
	attack();
}

void GameAI::collectResources() {
	std::cout << "[Base] Collected gold and wood from nearby mines.\n";
}

void GameAI::attack() {
	std::cout << "[Base] Evaluating map situation...\n";
	sendScouts(10);
	sendWarriors(25);
}