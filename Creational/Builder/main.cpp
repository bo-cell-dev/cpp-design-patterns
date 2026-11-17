#include "BurgerBuilder.h"

int main() {
	Burger cheeseBurger = 
		BurgerBuilder()
		.addBun()
		.addCheese()
		.addBacon()
		.addCheese()
		.addBun()
		.build();
	cheeseBurger.show();

	Burger meatBurger =
		BurgerBuilder()
		.addBun()
		.addCheese()
		.addMeat()
		.addBacon()
		.addMeat()
		.addBun()
		.build();
	meatBurger.show();


	return 0;
}