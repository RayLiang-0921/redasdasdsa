#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "../functions/position/position.h"
#include <string>

class GameObject {
protected:
    Position position;

    int health;
    int maxHealth;

    std::string name;

    int attack;
public:
    GameObject(Position initialPosition, int maxHealth, int attack, std::string name);
    ~GameObject();

    Position getPosition();

    void setPosition(Position position);

    int getHealth();

    int getMaxHealth();

    std::string getName();
};

#endif
