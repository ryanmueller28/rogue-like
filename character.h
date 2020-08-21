#pragma once
#include <string>


class character
{
public:
    character();
    character(int health, int maxHealth, int xp, int level);

    ~character();

    unsigned int CurrentHealth;
    unsigned int MaxHealth;
    unsigned int EXPPoints;

    unsigned int Level;

    void PrintCharacter();
    std::string CharacterName;
    std::string ClassName;
    

};