#include "Deck.h"

Deck::Deck(){
	size = 0;
}
Deck::Deck(int size){
this->size = size;
}

void Deck::setSize(int size){

	this->size = size;
}

int Deck::getSize() {

	return size;
}

void Deck::mixCards() {

}