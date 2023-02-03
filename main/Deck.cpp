#include "Deck.h"

Deck::Deck() {


}

void Deck::firstDeck() {

	for (int i = 0; i < 18; i++) {

		deckOne.push(cards[i]);
	}
}

void Deck::secondDeck() {

	for (int i = 18; i < 35; i++) {

		deckTwo.push(cards[i]);
	}
}

void Deck::thirdDeck() {

	for (int i = 35; i < 53; i++) {

		deckThree.push(cards[i]);
	}
}

void Deck::stacks() {
	
	cards->loadCards();
	cards->mixDeck();

	firstDeck();
	secondDeck();
	thirdDeck();
}