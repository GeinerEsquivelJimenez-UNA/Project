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
	RenderWindow* window;


public:

	Menu(float width, float hight);
	Menu();
	~Menu();

	void options();

	void draw(RenderWindow*);
	void moveDowm();
	void moveUp();
	RectangleShape buttonPlay(RenderWindow *);
	RectangleShape buttonOptions(RenderWindow*);
	RectangleShape buttonExit(RenderWindow*);



	void useKeyboard(RenderWindow&);
	int selectOption();

	void useMouse(Sprite);
	void pressedPlay(Sprite,Vector2i);
	void pressedOptions(Sprite, Vector2i);
	void pressedExit(Sprite, Vector2i);
	void checkTexture(Texture &);
	void showMenu();
};
