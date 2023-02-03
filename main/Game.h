#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"

using namespace sf;

class Game
{

private:
	Card* card;
public:
	Game();

	void playGame(RenderWindow *);


};

