#include "Shortcut.h"
#include "ScoreUpdater.h"



void ChecknUpdate(int * playerScore, int highScore[], string highScoreName[], string * playerName, size_t size)
{
	int NoGood = 0;
	for (int i = 0; i < size; i++)
	{
		if (*playerScore > highScore[i]) //If this is true, it then Updates the highscore to the playerscore.
		{
			highScore[i] = *playerScore;
			highScoreName[i] = *playerName;
			cout << " New HighScore saved!" << endl;
			NoGood++;
			break;
		}
	}
	if(NoGood == 0)
		cout << "Seems like your HighScore is lower than the top 6 to get put up!" << endl << endl;
}

void Capitalize(char playerName[], size_t size)
{
	for (int i = 0; i < 20; i++)
	{
		if (playerName[i] >= 97)
		{
			if (playerName[i] <= 122)
			{
				playerName[i] -= 32;
			}
		}
		if (playerName[i] == '\0')
			break;
	}
}