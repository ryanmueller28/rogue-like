#include "character.h"
#include <iostream>

character::character()
{

}

character::~character()
{

}

/**
 * Generic Print function for debugging
 * 
 * */
void character::PrintCharacter()
{
    std::cout << CurrentHealth << std::endl;
    std::cout << MaxHealth << std::endl;
    std::cout << EXPPoints << std::endl;
    std::cout << Level << std::endl;
}


/**
 * Override constructor
 * @param - health set health
 * @param - maxHealth set MaxHealth
 * @param - xp set EXPPoints
 * @param - level set level
 * */
character::character(int health, int maxHealth, int xp, int level)
{
    CurrentHealth = health;
    MaxHealth = maxHealth;
    EXPPoints = xp;
    Level = level;
}