#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "List.h"

using namespace sf;

class Game
{

private:
	Card* cards;
	
public:
	Game();

	void playGame(RenderWindow *);


};

