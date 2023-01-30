
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"
using namespace std;
using namespace sf;


int main() {

	RenderWindow window(VideoMode(1280, 800), "Battle of Monis");

	Menu* menu = new Menu(1280, 800);

	menu->options();
	
	while (window.isOpen()) {

	menu->showMenu(window);
	}
	return 0;

}