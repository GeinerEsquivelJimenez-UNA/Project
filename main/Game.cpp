#include "Game.h"

Game::Game() {

}


void Game::playGame(RenderWindow* window) {
   
	Texture textura;

	if (!textura.loadFromFile("Tablero.png"))
	{
		std::cout << "No se encontro la imagen";
	}

	Sprite imagenDeJuego(textura);

	window->setFramerateLimit(60);

    while (window->isOpen()) {

        Event event;
        while (window->pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                window->close();
            }
 


        }

        window->clear();

        window->draw(imagenDeJuego);
  
        window->display();
    }

}


