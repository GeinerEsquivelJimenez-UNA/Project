#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

#define Max_menu 3

class Menu
{
private:
	int mainMenuSelected;
	Font* font;
	Text mainMenu[Max_menu];
public:

	Menu(float width, float hight);

	~Menu();

	void draw(RenderWindow& window);
	void moveDowm();
	void moveUp();
	void useKeyboard(RenderWindow&);
	void selectOption();
	void showWindow(RenderWindow&);
};
