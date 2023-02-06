#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Player
{
private:
	string playerName;
	int points;

public:
	Player();
	Player(string, int);
	void setName(string);
	void setPoints(int);
	string getName();
	int getPoints();
	void enterNames(RenderWindow*);


};

