#include "Shortcut.h"
#include "ScoreUpdater.h"



void ChecknUpdate(int * playerScore, score* highscore, string * playerName, int Boardsize)
{
	int vessel = 0; //Used for switching around the scores
	string nameVessel = "";

	for (int i = 0; i < Boardsize; i++)
	{
		for (int o = 0; o < Boardsize; o++)
		{
			if (highscore[i].playerScore > highscore[o].playerScore) //If this is true, it then Updates the highscore to the playerscore.
			{
				vessel = highscore[i].playerScore;
				highscore[i].playerScore = highscore[o].playerScore;
				highscore[o].playerScore = vessel;

				nameVessel = highscore[i].playerName;
				highscore[i].playerName = highscore[o].playerName;
				highscore[o].playerName = nameVessel;

			}

		}
	}
	cout << " New HighScore saved!" << endl;
}


score* CopyMethod(score* highScore, int Boardsize, int *playerScore, string* playerName)
{
	score* newHighScore = new score[Boardsize + 1]; //Temporary Array

	for (int i = 0; i < Boardsize; i++) //Array Copy Loop
	{
		newHighScore[i].playerName = highScore[i].playerName;
		newHighScore[i].playerScore = highScore[i].playerScore;
	}

	newHighScore[Boardsize].playerScore = *playerScore; //Adding the player score and name into temporary array
	newHighScore[Boardsize].playerName = *playerName;

	return newHighScore;
}