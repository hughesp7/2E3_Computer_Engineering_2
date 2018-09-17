#include"Game.h"

int Game::countScore = 0;

Game::Game() {

	endGame = false;
	fourWay = STOP;
	cout << "Enter your username" << endl;
	cin >> username;
	dataFile.open("Highscore.txt", ios::in);
	dataFile >> numhighscore >> highscore;
	cout << "The current high score is " << numhighscore << " by player " << highscore << endl;
	dataFile.close();
	cout << "Press enter to start your game" << endl;
	system("pause");

}

void Game::input() {
		if (_kbhit())
		{
			switch (_getch())
			{
			case 'a':
				fourWay = LEFT;
				break;
			case 'w':
				fourWay = UP;
				break;
			case 's':
				fourWay = DOWN;
				break;
			case 'd':
				fourWay = RIGHT;
				break;
			}
		}

	}



void Game::drawFrame() {
	system("cls");

	//print outer frame of snake box
	for (int i = 0; i < frameWidth + 2; i++)
	{
		cout << "-";
	}
	cout << endl;

	//prints between top and bottom of frame
	for (int z = 0; z < frameHeight; z++)
	{
		for (int i = 0; i < frameWidth; i++)
		{
			if (i == 0)
			{
				cout << "|";
			}

			if (z == one.getY() && i == one.getX() )
			{
				cout << "S";
			}
			else if (z == random.getY() && i == random.getX() )
				{
					cout << "F";
				}

			else
			{
				bool print = false;
				for (int k = 0; k < one.getSnakeLength(); k++)
				{
					//x = y[a][b]
					//*((int *)y + a * NUMBER_OF_COLUMNS + b)
					if ( i == *((one.getArray()) + 0*one.getSnakeLength() + k) &&  z == *((one.getArray()) + 1*one.getSnakeLength() + k))
					{
						cout << "s";
						print = true;
					}

				}
				if (!print)
				{
					cout << " ";
				}

			}
			


			if (i == frameWidth - 1)
			{
				cout << "|";
			}

		}
		cout << endl;
	}

	for (int i = 0; i < frameWidth + 2; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "Player: " << username << endl;
	cout << "Score: " << countScore;



}

void Game::calculations()
{
	//*((int *)y + a * NUMBER_OF_COLUMNS + b)
	int currentX = *((one.getArray()) + 0 * one.getSnakeLength() + 0);//tailArray[0][0];
	int currentY = *((one.getArray()) + 1 * one.getSnakeLength() + 0);
	int nextX, nextY;
	*((one.getArray()) + 0 * one.getSnakeLength() + 0) = one.getX();
	*((one.getArray()) + 1 * one.getSnakeLength() + 0) = one.getY();
	for (int i = 1; i < one.getSnakeLength(); i++)
	{
		nextX = *((one.getArray()) + 0 * one.getSnakeLength() + i);
		nextY = *((one.getArray()) + 1 * one.getSnakeLength() + i);
		*((one.getArray()) + 0 * one.getSnakeLength() + i) = currentX;
		*((one.getArray()) + 1 * one.getSnakeLength() + i) = currentY;
		currentX = nextX;
		currentY = nextY;
	}

	switch (fourWay)
	{
	case LEFT:
		one.x--;
		break;
	case RIGHT:
		one.x++;
		break;
	case DOWN:
		one.y++;
		break;
	case UP:
		one.y--;
		break;
	default:
		break;
	}
	if (one.getX() >= frameWidth || one.getY() >= frameHeight || one.getX() < 0 || one.getY() < 0)
	{
		endGame = true;
	}
	for (int i = 0; i < one.getSnakeLength(); i++)
	{
		if (*((one.getArray()) + 0 * one.getSnakeLength() + i) == one.getX() && *((one.getArray()) + 1 * one.getSnakeLength() + i) == one.getY() )
			endGame = true;
	}
	if ( one.getX() == random.getX() && one.getY() == random.getY() )
	{
		one.snakeLengthAddOne();
		countScore = countScore + 10;
		random.newFood();

	}

}

void Game::sleep(unsigned milliseconds)
{
	Sleep(milliseconds);
}



void Game::setHighscore() {
	if (countScore > numhighscore)
	{
		numhighscore = countScore;
		highscore = username;
		cout << "Congratulations that's a new highscore!!!" << endl;
		dataFile.open("Highscore.txt", ios::out);
		dataFile << numhighscore <<"   "<< highscore<< endl;
		dataFile.close();
	}



}