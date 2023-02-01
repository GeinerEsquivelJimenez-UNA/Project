#include "Card.h"
Card::Card() {
	type = "";
	score = 0;

}
Card::Card(string type, int score) {

	this -> type = type;
	this -> score = score;

}
void Card::setType(string type) {

	this->type = type;

}
void Card::setScore(int score) {

	this->score = score;

}