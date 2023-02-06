#include "menu.h"

Menu::Menu(float width, float hight) {

	this->width = width;
	this->hight = hight;
}

Menu::~Menu() {

}

void Menu::options() {

	Font* font = new Font();

	if (!font->loadFromFile("FontText.ttf")) {
		std::cout << "	No se encontro la fuente de texto";
	}

	//play
	mainMenu[0].setFont(*font);
	mainMenu[0].setFillColor(Color::Red);
	mainMenu[0].setString("Play");
	mainMenu[0].setCharacterSize(50);
	mainMenu[0].setPosition(Vector2f(width / 2.1 - 35, hight / (Max_menu + 1) -60));

	//Continue
	mainMenu[1].setFont(*font);
	mainMenu[1].setFillColor(Color::Black);
	mainMenu[1].setString("Continue");
	mainMenu[1].setCharacterSize(50);
	mainMenu[1].setPosition(Vector2f(width / 2.3 - 50, hight / (Max_menu + 1) + 140));

	//Exit
	mainMenu[2].setFont(*font);
	mainMenu[2].setFillColor(Color::Black);
	mainMenu[2].setString("Exit");
	mainMenu[2].setCharacterSize(50);
	mainMenu[2].setPosition(Vector2f(width / 2.1 - 35, hight / (Max_menu + 1) +350));
}
void Menu::draw(RenderWindow *window) {

	for (int i = 0; i < 3; i++) {

		window->draw(mainMenu[i]);
	}
}


RectangleShape Menu::buttonPlay(RenderWindow *window) {

	button.setPosition(width / 2.1 - 140, hight / (Max_menu + 1) - 80);
	button.setSize(Vector2f(740.f, 200.f));
	button.setScale(Vector2f(0.5f, 0.5f));
	button.setOutlineThickness(1.f);
	return button;
}

RectangleShape Menu::buttonContinue(RenderWindow* window) {

	button.setPosition(width / 2.1 - 140, hight / (Max_menu + 1) + 120);
	button.setSize(Vector2f(740.f, 200.f));
	button.setScale(Vector2f(0.5f, 0.5f));
	button.setOutlineThickness(1.f);
	return button;
}

RectangleShape Menu::buttonExit(RenderWindow* window) {

	button.setPosition(width / 2.1 - 140, hight / (Max_menu + 1) + 325);
	button.setSize(Vector2f(740.f, 200.f));
	button.setScale(Vector2f(0.5f, 0.5f));
	button.setOutlineThickness(1.f);
	return button;
}

void Menu::useMouse(Sprite imagenDeMenu ) {

	Event event;
	while (window->pollEvent(event)) {

		if (event.type == Event::Closed) {
			window->close();
		}
		if (event.type == Event::MouseButtonPressed) {
			if (event.mouseButton.button == Mouse::Left) {

				Vector2i mousePosition = Mouse::getPosition(*window);

				pressedPlay(imagenDeMenu, mousePosition);
				pressedContinue(imagenDeMenu, mousePosition);
				pressedExit(imagenDeMenu, mousePosition);
			}
		}
	}
}

void Menu::pressedPlay(Sprite imagenDeMenu, Vector2i mousePosition) {

	if (buttonPlay(window).getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
		std::cout << "Play button clicked!" << std::endl;
		game->playGame(window);
	}
}

void Menu::pressedContinue(Sprite imagenDeMenu, Vector2i mousePosition) {

	if (buttonContinue(window).getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
		std::cout << "Options button clicked!" << std::endl;
		window->clear();
	}
}

void Menu::pressedExit(Sprite imagenDeMenu, Vector2i mousePosition) {

	if (buttonExit(window).getGlobalBounds().contains(mousePosition.x, mousePosition.y)) {
		std::cout << "Exit button clicked!" << std::endl;
		window->clear();
		exit(0);
	}
}

void Menu::checkTexture(Texture& texture) {

	if (!texture.loadFromFile("Submenu.png")){

		std::cout << "No se encontro la imagen";
	}
}

void Menu::showMenu() {

	window = new RenderWindow(VideoMode(1280, 800), "Battle of Monis");

	Texture *texture = new Texture();

	checkTexture(*texture);

	Sprite imagenDeMenu(*texture);

	window->setFramerateLimit(60);

	options();

	while (window->isOpen()) {

		buttonPlay(window);

		useMouse(imagenDeMenu);
			
		window->clear();
		window->draw(imagenDeMenu);
		
		draw(window);
		window->display();
		
		
	}
	delete texture;
}