#pragma once
class Score
{
private:
	int points;

public:
	Score();
	Score(int);
	void setPoints(int);
	int getPoints();
	void showTotalPoints();
	void showWinner();

};

