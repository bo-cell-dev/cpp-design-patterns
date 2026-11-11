#pragma once
#include "GameAI.h"

class OrcsAI: public GameAI {
public:
    void buildStructures() override;
    void buildUnits() override;
    void sendScouts(int position) override;
    void sendWarriors(int position) override;
};