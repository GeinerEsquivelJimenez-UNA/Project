#pragma once
#include <iostream>
#include "Node.h"
#include <SFML/Graphics.hpp>
#include <string>
#include <cstdlib>
#include "Card.h"

using namespace sf;

class List
{
public:
	Node* head;
	Texture texture;
	Card *card;

	List();
	~List();

	void addFirstDeck(string&);
	void addSecondDeck(string&);
	void addThirdDeck(string&);

	void loadFirstDeck();
	void loadSecondDeck();
	void loadThirdDeck();

	void showFirstDeck(RenderWindow *);
	void showSecondDeck(RenderWindow *);
	void showThirdDeck(RenderWindow *);



};

