#include "List.h"

List::List() : head(nullptr) {}

List::~List() { }

void List::addFirstDeck(string& fileName) {

    Node* newNode = new Node(fileName, NULL);
    Node* temp;

    if (head == NULL) {
        head = newNode;
    }
    temp = head;
    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();
    }
    temp->setNextNode(newNode);


}

void List::addSecondDeck(string& fileName) {

    Node* newNode = new Node(fileName, NULL);
    Node* temp;

    if (head == NULL) {
        head = newNode;
    }
    temp = head;
    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();
    }
    temp->setNextNode(newNode);
}

void List::addThirdDeck(string& fileName) {

    Node* newNode = new Node(fileName, NULL);
    Node* temp;

    if (head == NULL) {
        head = newNode;
    }
    temp = head;
    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();
    }
    temp->setNextNode(newNode);

}

void List::loadFirstDeck() {
    
    string cards;

    for (int i = 0; i < 18; i++) {

        cards = ("c" + to_string(i) + ".jpg");

        addFirstDeck(cards);

    }
}

void List::loadSecondDeck() {

    string cards;

    for (int i = 18; i < 36; i++) {

        cards = texture.loadFromFile("c" + to_string(i) + ".jpg");

        addSecondDeck(cards);
    }
}

void List::loadThirdDeck() {

    string cards;

    for (int i = 36; i < 54; i++) {

        cards = texture.loadFromFile("c" + to_string(i) + ".jpg");

        addThirdDeck(cards);
    }
}


void List::showFirstDeck(RenderWindow *window) {

    loadFirstDeck();
    
    Node* temp;

    temp = head;

    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();
 
    }
    Texture texture = temp->card.getTexture();

    Sprite card(texture);

    window->draw(card);

 }

void List::showSecondDeck(RenderWindow *window) {

    Node* temp;

    temp = head;

    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();

    }
    Texture texture = temp->card.getTexture();

    Sprite card(texture);

    window->draw(card);
}

void List::showThirdDeck(RenderWindow *window) {

    Node* temp;

    temp = head;

    while (temp->getNextNode() != NULL) {

        temp = temp->getNextNode();

    }
    Texture texture = temp->card.getTexture();

    Sprite card(texture);

    window->draw(card);

}