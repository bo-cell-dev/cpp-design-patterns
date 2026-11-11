#pragma once
#include "GameAI.h"

class MonstersAI: public GameAI {
public:
	void collectResources() override;

    void buildStructures() override;
    void buildUnits() override;
    void sendScouts(int position) override;
    void sendWarriors(int position) override;

};