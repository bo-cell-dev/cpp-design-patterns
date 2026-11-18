#include "ConcreteEnemy.h"

int main() {
	Orc orcExample;
	orcExample.printInfo();

	std::unique_ptr<IEnemy> orcClone =  orcExample.clone();

	orcClone->printInfo();

	orcExample.setName("New orc");
	orcExample.printInfo();

	std::unique_ptr<Dragon> dragonExample = std::make_unique<Dragon>();
	dragonExample->printInfo();

	return 0;
}