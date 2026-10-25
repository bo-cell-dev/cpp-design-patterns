#include "EuropeanCar.h"
#include "GasStation.h"
#include "TeslaCar.h"
#include "AmericanCarAdapter.h"

int main() {
	GasStation gs;

	TeslaCar* tesla = new TeslaCar();
	AmericanCarAdapter adapter(tesla);
	gs.connectCar(&adapter);
	return 0;
}