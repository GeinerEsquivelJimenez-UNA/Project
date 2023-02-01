#pragma once
#include <string>
using namespace std;

class Deck
{

private:
	int size = 54;

public:

	Deck();
	Deck(int);
	void setSize(int);
	int getSize();
	void mixCards();




};

