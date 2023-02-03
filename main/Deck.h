#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <stack>
#include "Card.h"

using namespace sf;
using namespace std;

class Deck
{

private:
	stack<Card> deckOne;
	stack<Card> deckTwo;
	stack<Card> deckThree;
	Card *cards;

public:

	Deck();

	void firstDeck();

	void secondDeck();

	void thirdDeck();

	void stacks();

};

