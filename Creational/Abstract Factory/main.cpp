#include <iostream>
#include <memory>
#include "ConcreteFactories.h"

void finishedRoom(const IFurnitureFactory& iff) {
    std::unique_ptr<IChair> chair = iff.createChair();

    chair->sitOn();

    std::unique_ptr<ITable> table = iff.createTable();

    table->putCoffee();
}


int main() {
    VictorianFactory victorianFactory;
    finishedRoom(victorianFactory);

    std::cout << std::endl;

    ModernFactory modernFactory;
    finishedRoom(modernFactory);

    return 0;
}
