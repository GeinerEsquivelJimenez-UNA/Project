#pragma once
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <stack>

using namespace sf;

using namespace std;

class Card
{
private:
	const int imageCount = 54;
	Sprite* cards;

public:

	Card();

	void showCard(RenderWindow*);

	void loadCards();

	void swap(Sprite&, Sprite&);

	void mixDeck();



};

