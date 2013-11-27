#include "Hero.h"
#include "Texture.h"

Hero::Hero(){
    this->setTexture(Texture::HERO);
    
    this->setPosition(180, 600);
    
    this->gun.setOwner(this);
}

void Hero::move2left(){
	float x = this->getPosition().x;
    if (x>0) this->move(-15,0);
}

void Hero::move2right(){
	float x = this->getPosition().x;
    if (x<400) this->move(15,0);
}

void Hero::move2down(){
	float y = this->getPosition().y;
	if (y<600)	this->move(0,15);
}

void Hero::move2up(){
	float y = this->getPosition().y;
	if (y>20) this->move(0,-15);
}

