#include <cstdio>

#include "Simulator.h"


void Simulator::run()
{
    int turn = 0;
    bool gameEnd = false;

    while ( !gameEnd )
    {
        printf("turn : %d\n", turn++);

		for ( auto it = mCharacterVector.begin(); it != mCharacterVector.end(); it++)
		{
            it->update();
            it->printState();

            gameEnd = ( gameEnd || it->isDead());
        }

        printf("turn end\n");

    }
}

void Simulator::init()
{
    mCharacterVector.push_back(Character(20));
    mCharacterVector.push_back(Character());
}


Simulator::Simulator()
{
    init();
}
