#pragma once
#include <iostream>
#include "Card.h"
class Node
{
public:
	Card card;
	Node* nextNode;

	Node(string& fileName, Node*);

	void setNextNode(Node*);
	Node* getNextNode();

};

