#include "MonstersAI.h"
#include <iostream>

void MonstersAI::collectResources() {
    std::cout << "[Monsters] Monsters do not build mines, they just roar in caves.\n";
}

void MonstersAI::buildStructures() {
    std::cout << "[Monsters] Dug a new lair.\n";
}

void MonstersAI::buildUnits() {
    std::cout << "[Monsters] Hatched a pack of harpies and trolls.\n";
}

void MonstersAI::sendScouts(int position) {
    std::cout << "[Monsters] Sent bats to scout position " << position << ".\n";
}

void MonstersAI::sendWarriors(int position) {
    std::cout << "[Monsters] Swarm of beasts is crawling to position " << position << ".\n";
}
