#include "Player.h"

Player::Player() {
	playerName = " ";
	points = 0;
}

Player::Player(string Name, int points) {

	playerName = Name;
	this->points = points;

}

void Player::setName(string Name) {

	playerName = Name;
	
}

void Player::setPoints(int points) {

	this->points = points;
}

string Player::getName() {

	return playerName;
}

int Player::getPoints() {

	return points;
}