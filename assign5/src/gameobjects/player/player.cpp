#include "player.h"
#include "../../controller/enviroment.h"
#include "../../functions/AnsiPrint/AnsiPrint.h"

using namespace PlayerState;

// Add your code to implement the Player class here.
Player :: Player(Position initialPosition) : GameObject(initialPosition, maxHealth,attack, name), position(initialPosition){}


Player :: ~Player(){}

// render
void Player::render() {
    AnsiPrint("PL", green, blue);
}

