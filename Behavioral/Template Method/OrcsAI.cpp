#include "OrcsAI.h"
#include <iostream>

void OrcsAI::buildStructures() {
    std::cout << "[Orcs] Built barracks and blacksmith.\n";
}

void OrcsAI::buildUnits() {
    std::cout << "[Orcs] Trained grunts and shamans.\n";
}

void OrcsAI::sendScouts(int position) {
    std::cout << "[Orcs] Sent goblin scouts to position " << position << ".\n";
}

void OrcsAI::sendWarriors(int position) {
    std::cout << "[Orcs] Horde is charging towards position " << position << "!\n";
}
