#include "BowAttack.h"
#include "SwordAttack.h"
#include "FistAttack.h"
#include "Hero.h"

int main() {
	SwordAttack sword;
	BowAttack bow;
	FistAttack fists;
	Hero hero(&fists);

	hero.performAttack();
	hero.setStrategy(&bow);

	hero.performAttack();
	hero.setStrategy(&sword);

	hero.performAttack();

	return 0;
}