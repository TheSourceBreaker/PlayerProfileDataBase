#include "Shortcut.h"
#include "ScoreUpdater.h"



void ChecknUpdate(int * playerScore, int highScore[], string highScoreName[], string * playerName, size_t size)
{
	int vessel = 0;
	string nameVessel = "";
	int NoGood = 0;
	for (int i = 0; i < size; i++)
	{
		if (*playerScore > highScore[i]) //If this is true, it then Updates the highscore to the playerscore.
		{
			vessel = highScore[i];
			highScore[i] = *playerScore;
			*playerScore = vessel;

			nameVessel = highScoreName[i];
			highScoreName[i] = *playerName;
			*playerName = nameVessel;

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

int* CopyMethodInt(int* currentHighScore, int Boardsize, int *playerScore)
{
	int* newHighScore = new int[Boardsize + 1];

	for (int i = 0; i < Boardsize; i++)
	{
		newHighScore[i] = currentHighScore[i];
	}

	newHighScore[Boardsize + 1] = *playerScore;
	//delete currentHighScore;
	return newHighScore;
}

string* CopyMethodString(string* currentHighNames, int Boardsize, string* playerName)
{
	string* newHighNames = new string[Boardsize + 1];

	for (int i = 0; i < Boardsize; i++)
	{
		newHighNames[i] = currentHighNames[i];
	}

	newHighNames[Boardsize + 1] = *playerName;
	//delete currentHighNames;
	return newHighNames;
}