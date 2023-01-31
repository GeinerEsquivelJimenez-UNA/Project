
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"
using namespace std;
using namespace sf;


int main() {

	Menu* menu = new Menu(1280, 800);

	menu->showMenu();

	return 0;

}