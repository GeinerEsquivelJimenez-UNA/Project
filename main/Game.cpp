#include "Game.h"

Game::Game() {

}

void Game::playGame(RenderWindow & window) {

	std::cout << "hola";
	Texture textura;

	if (!textura.loadFromFile("gamer.png"))
	{
		std::cout << "No se encontro la imagen";;
	}

	// Crea un objeto Sprite con la textura cargada
	Sprite imagenDeJuego;
	imagenDeJuego.setTexture(textura);


	while (window.isOpen()) {

	window.clear();
	window.draw(imagenDeJuego);
	window.display();

	std::cout << "bye";
	}



}
