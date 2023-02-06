#include "Card.h"

Card::Card(string &fileName) {

	texture.loadFromFile(fileName);
	sprite.setTexture(texture);

}


void Card::setTexture(Texture texture) {

	this->texture = texture;

}

Texture Card::getTexture() {

	return texture;
}



void Card::setSprite(Sprite sprite) {

	this->sprite = sprite;

}

Sprite Card::getSprite() {

	return sprite;
}


