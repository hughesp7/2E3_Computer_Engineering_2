#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<conio.h>
#include<Windows.h>
#include<fstream>
#include "Snake.h"
#include "Food.h"


using namespace std;

class Game {
private:
	bool endGame;
	string username, highscore;
	const int frameWidth = 14;
	const int frameHeight = 14;
	static int countScore;
	Snake one;
	Food random;
	int numhighscore;
	fstream dataFile;
	enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
	eDirection fourWay;

public:
	Game();
	void input();
	void drawFrame();
	void calculations();
	bool getEndGame() { return endGame; }
	string getUsername() { return username; }
	int getcountScore() { return countScore; }
	void sleep(unsigned milliseconds);
	void setHighscore();
	



};