#include<iostream>
#include<ctime>
#include"Game.h"
#include"Snake.h"
using namespace std;




int main() {

	Game two;
	while (two.getEndGame() == false)
	{
		two.drawFrame();
		two.input();
		two.calculations();
		two.sleep(100);
	}
	system("cls");
	two.setHighscore();
	


	return 0;
}





