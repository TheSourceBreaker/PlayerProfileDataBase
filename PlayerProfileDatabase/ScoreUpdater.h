#pragma once


struct score
{
	string playerName;
	int playerScore = 0;
};
void ChecknUpdate(int * playerScore, score* highscore, string * playerName, int Boardsize);
score* CopyMethod(score* highScore, int Boardsize, int *playerScore, string* playerName);