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

void Player::enterNames(RenderWindow* window) {

	Texture textura;

	if (!textura.loadFromFile("Nombres.jpg"))
		cout << "No se encontro la imagen";
	{
	}

	Sprite enterNames(textura);

	window->setFramerateLimit(60);

	while (window->isOpen()) {

		Event event;
		while (window->pollEvent(event)) {

			if (event.type == sf::Event::Closed) {
				window->close();
			}

		}

		window->clear();

		window->draw(enterNames);

		window->display();
	}


}