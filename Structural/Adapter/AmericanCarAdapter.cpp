#include "AmericanCarAdapter.h"


// Adapter
void AmericanCarAdapter::plugInCar() {
	car->chargeTesla();
}

AmericanCarAdapter::AmericanCarAdapter(TeslaCar* car): car(car) {}