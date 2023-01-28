#include "menu.h"

Menu::Menu(float width, float hight) {

	Font* font = new Font();

	if (!font->loadFromFile("stocky.ttf")) {
		std::cout << "	Error";
	}

	//play
	mainMenu[0].setFont(*font);
	mainMenu[0].setFillColor(Color::Red);
	mainMenu[0].setString("Play");
	mainMenu[0].setCharacterSize(50);
	mainMenu[0].setPosition(Vector2f(width / 4 - 50, hight / (Max_menu + 1)));

	//options
	mainMenu[1].setFont(*font);
	mainMenu[1].setFillColor(Color::Black);
	mainMenu[1].setString("Options");
	mainMenu[1].setCharacterSize(50);
	mainMenu[1].setPosition(Vector2f(width / 4 - 50, hight / (Max_menu + 1) * 2));

	//Exit
	mainMenu[2].setFont(*font);
	mainMenu[2].setFillColor(Color::Black);
	mainMenu[2].setString("Exit");
	mainMenu[2].setCharacterSize(50);
	mainMenu[2].setPosition(Vector2f(width / 4 - 50, hight / (Max_menu + 1) * 3));

	mainMenuSelected = 0;
}

Menu::~Menu() {

}

void Menu::draw(RenderWindow& window) {

	for (int i = 0; i < 3; i++) {

		window.draw(mainMenu[i]);
	}
}

void Menu::moveDowm() {

	if (mainMenuSelected + 1 <= Max_menu) {

		mainMenu[mainMenuSelected].setFillColor(Color::Black);

		mainMenuSelected++;

		if (mainMenuSelected == 3) {
			mainMenuSelected = 0;
		}
		mainMenu[mainMenuSelected].setFillColor(Color::Red);
	}
}

void Menu::moveUp() {

	if (mainMenuSelected - 1 >= -1) {

		mainMenu[mainMenuSelected].setFillColor(Color::Black);

		mainMenuSelected--;

		if (mainMenuSelected == -1) {
			mainMenuSelected = 2;
		}
		mainMenu[mainMenuSelected].setFillColor(Color::Red);
	}
}

void Menu::useKeyboard(RenderWindow& window) {

	Event event;
	while (window.pollEvent(event)) {

		if (event.type == Event::Closed) {
			window.close();
		}
		if (event.type == Event::KeyReleased) {

			if (event.key.code == Keyboard::Up) {
				moveUp();
				break;
			}
			if (event.key.code == Keyboard::Down) {
				moveDowm();
				break;
			}
		}
	}
}

void Menu::selectOption() {

	//select option
	if (Keyboard::isKeyPressed(Keyboard::Key::Return) && mainMenuSelected == 0) {

		std::cout << "Play";
	}

	//slect options
	if (Keyboard::isKeyPressed(Keyboard::Key::Return) && mainMenuSelected == 1) {

		std::cout << "Options";
	}

	//Salir
	if (Keyboard::isKeyPressed(Keyboard::Key::Return) && mainMenuSelected == 2) {

		exit(0);
	}
}

void Menu::showWindow(RenderWindow& window) {

	Texture textura;
	if (!textura.loadFromFile("kratos.jpg"))
	{
		std::cout << "No se encontro la imagen";;
	}

	// Crea un objeto Sprite con la textura cargada
	Sprite imagenDeMenu;
	imagenDeMenu.setTexture(textura);

	while (window.isOpen()) {

		useKeyboard(window);
		selectOption();

		window.clear();
		window.draw(imagenDeMenu);
		draw(window);
		window.display();
	}

}