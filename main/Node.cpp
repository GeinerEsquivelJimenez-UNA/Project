#include "Node.h"


Node::Node(string& fileName,Node* nextNode) : card(fileName), nextNode(nullptr) {


}

void Node::setNextNode(Node *nextNode) {

	this->nextNode = nextNode;

}

Node* Node::getNextNode() {

	return nextNode;
}