#pragma once


struct score
{
	string playerName;
	int playerScore = 0;
};

void ChecknUpdate(int * playerScore, score* highscore, string * playerName, int Boardsize);
//score* CopyMethod(int* currentHighScore, int Boardsize, int *playerScore, string* currentHighNames, string* playerName);
score* CopyMethod(score* highScore, int Boardsize, int *playerScore, string* playerName);