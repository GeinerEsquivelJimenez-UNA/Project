
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"
using namespace std;
using namespace sf;


int main() {

	RenderWindow window(VideoMode(1280, 800), "zoid.jpg");

	Menu* menu = new Menu(1280, 800);

	menu->showWindow(window);

	return 0;

}