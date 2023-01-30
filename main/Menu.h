#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace sf;

#define Max_menu 3

class Menu
{
private:
	int mainMenuSelected;
	float width, hight;
	Game* game;
	Font* font;
	Text mainMenu[Max_menu];
	RectangleShape button;

public:

	Menu(float width, float hight);
	Menu();
	~Menu();

	void options();

	void draw(RenderWindow& window);
	void moveDowm();
	void moveUp();
	void buttons(RenderWindow&);
	void useKeyboard(RenderWindow&);
	void useMouse(RenderWindow&);
	void selectOption(RenderWindow&);
	void showMenu(RenderWindow&);
};
