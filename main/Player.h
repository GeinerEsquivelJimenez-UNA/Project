#pragma once
#include <string>
using namespace std;

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





};

