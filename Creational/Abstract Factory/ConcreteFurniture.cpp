#include "ConcreteFurniture.h"
#include <iostream>

void VictorianChair::sitOn() const {
    std::cout << "[Victorian] Sitting on a carved wooden chair.\n";
}

void VictorianTable::putCoffee() const {
    std::cout << "[Victorian] Putting coffee on an antique oak table.\n";
}

void ModernChair::sitOn() const {
    std::cout << "[Modern] Sitting on a sleek minimalist chair.\n";
}

void ModernTable::putCoffee() const {
    std::cout << "[Modern] Putting coffee on a tempered glass table.\n";
}