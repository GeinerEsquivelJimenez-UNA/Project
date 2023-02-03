#include "Card.h"

Card::Card() {


}

void Card::loadCards() {

		// El número de imágenes que deseas almacenar
		const int imageCount = 10;

		// Arreglos dinámicos para las texturas y los sprites
		sf::Texture* textures = new sf::Texture[imageCount];
		cards = new sf::Sprite[imageCount];

		// Carga cada imagen en una textura separada
		for (int i = 0; i < imageCount; i++)
		{
			if (!textures[i].loadFromFile("c" + to_string(i) + ".jpg")) // El to_string convierte el indice i (que es una numero) en string
			{
				cout << "No se encontro la imagen numero: " << i;
			}
		}

		// Crea un sprite a partir de cada textura y almacenarlo en el arreglo de sprites
		for (int i = 0; i < imageCount; i++)
		{
			sf::Sprite card(textures[i]);
			cards[i] = card;
		}

		// *Recordatorio* Tengo que liberar la memoria dinámica al final del programa
}


//Intercambio objetos
void Card::swap(Sprite& a, Sprite& b) {
	Sprite temp;

	temp = a;
	a = b;
	b = temp;
}

void Card::mixDeck() {

	int numberOfCards = 54;

	srand(time(0));

	for (int i = numberOfCards - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		swap(cards[i], cards[j]);
	}

}


