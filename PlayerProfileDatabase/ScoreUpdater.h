#pragma once


struct score
{
	string playerName;
	int playerScore = 0;
	
};

void ChecknUpdate(int * playerScore, int highScore[], string highScoreName[], string * playerName, size_t size);
void Capitalize(char playerName[], size_t size);