#include "gameobject.h"


GameObject::GameObject(Position initialPosition, int maxHealth, int attack, std::string name){
	this->maxHealth = maxHealth;
	position = initialPosition;
	this->attack = attack;
	this->name = name;
}
GameObject::~GameObject(){};
Position GameObject :: getPosition(){
	return position;
}

int GameObject :: getHealth(){
	return health;
}

int GameObject :: getMaxHealth(){
	return maxHealth; 
}

void GameObject :: setPosition(Position position){
	this->position = position;
}

// Add your code to implement the GameObject class here.
