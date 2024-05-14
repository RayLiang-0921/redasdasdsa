#ifndef PLAYER_H
#define PLAYER_H

#include "../../gamecore/gamestate.h"
#include "../gameobject.h"
#include "playerstate.h"

using namespace PlayerState;

// Rewrite this class to inherit from the GameObject class
// at /src/gameobjects/gameobject.h

class Player : public GameObject {
private:
    int healPower = 8;
public:
    Position position;
    Player(Position initialPosition);
    ~Player();

    // MoveState move();
    
    void render();
};

#endif
