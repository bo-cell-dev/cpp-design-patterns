#pragma once

class GameAI {
public:
	void takeTurn();
	virtual void collectResources();
	virtual void buildStructures() = 0;
	virtual void buildUnits() = 0;
	void attack();
	virtual void sendScouts(int position) = 0;
	virtual void sendWarriors(int position) = 0;

	virtual ~GameAI() = default;
};