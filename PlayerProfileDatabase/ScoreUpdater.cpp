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

score* CopyMethodInt(int* currentHighScore, int Boardsize, int *playerScore, string* currentHighNames, string* playerName)
{
	score* newHighScore = new score[Boardsize + 1];

	for (int i = 0; i < Boardsize; i++)
	{
		newHighScore[i].playerName = currentHighNames[i];
		newHighScore[i].playerScore = currentHighScore[i];
	}

	newHighScore[Boardsize + 1].playerScore = *playerScore;
	newHighScore[Boardsize + 1].playerName = *playerName;

	delete currentHighScore;
	return newHighScore;
}
