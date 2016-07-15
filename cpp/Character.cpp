#include "Character.h"

#include <cstdio>

int Character::index = 0;

Character::Character(int _hp, int _attack, int _defence)
    :id(index++), hp(_hp), attack(_attack), defence(_defence)
{
}

bool Character::isDead()
{
    return hp <= 0 ? true : false;
}

void Character::update()
{
    hp--;
}

void Character::printState()
{
    printf("id : %d, hp : %d\n",id, hp);
}
