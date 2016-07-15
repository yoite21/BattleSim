#pragma once

class Character
{
    public:
        bool isDead();
        void update();
        void printState();

    public:
        Character(int hp = 10, int attack = 5, int defence = 3);

    private:
        static int index;
        int id;
        int hp, attack, defence;
        

};
