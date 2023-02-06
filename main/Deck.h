#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <stack>
#include "Card.h"

using namespace sf;
using namespace std;

class Deck{

private:
	Card *cards;
	Sprite *sprites[];

public:

	Deck(Card*);


};

