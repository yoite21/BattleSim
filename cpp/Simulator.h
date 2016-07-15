#pragma once

#include <vector>

#include "Character.h"


class Simulator
{
    public:
        void run();
        
    private:
        void init();

    public:
        Simulator();

    private:
        std::vector<Character> mCharacterVector;
};
