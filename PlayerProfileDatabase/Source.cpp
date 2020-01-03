#include "Shortcut.h"
#include "ScoreUpdater.h"

int main()
{
	score scr;
	int boardSize = 6;

	int * playerscore = &scr.playerScore;//Pointers for playerName and playerScore
	string * playerName = &scr.playerName;

	string * answer = new string;//Final answer setup
	*answer = "";

	score* highscore = new score[boardSize];//Dynamic Array setup

	highscore[0].playerScore = 900;
	highscore[1].playerScore = 850;
	highscore[2].playerScore = 750;
	highscore[3].playerScore = 600;
	highscore[4].playerScore = 450;
	highscore[5].playerScore = 300;
	highscore[0].playerName = "Bot1";
	highscore[1].playerName = "Bot2";
	highscore[2].playerName = "Bot3";
	highscore[3].playerName = "Bot4";
	highscore[4].playerName = "Bot5";
	highscore[5].playerName = "Bot6";

	while (true)
	{
		//----------------------------------------------------This Shows/Displays the ScoreBoard:

		cout << "Welcome to Source's Reliable ScoreBoard! Here's how the Board looks now!" << endl << endl;
		cout << "ScoreBoard:" << endl;

		for (int p = 0; p < boardSize; p++)
			cout << highscore[p].playerName << " with " << highscore[p].playerScore << " points." << endl;
		
		//-----------------------------This part will ask for the player's Name and Score:
		
		cout << endl << "Type in your name for the ScoreBoard!" << endl;
		cin >> *playerName;

		cout << endl << "Ok! " << *playerName << ", Whats the Highest score you've gotten on ANY video-game EVER?" << endl;
		cin >> *playerscore;

		cout << endl << "Alrighty now lets see if you made it unto the top 9..." << endl << endl;

		//This part will determine if the player's score is worthy of being put on the board:

		highscore = CopyMethod(highscore, boardSize, playerscore, playerName);
		boardSize++;

		ChecknUpdate(playerscore, highscore, playerName, boardSize);

		//-----------------------This part will ask the player if they want to leave or stay:

		cout << endl << "Go back to the Start?" << endl;
		cin >> *answer;

		if (*answer == "yes" || *answer == "Yes")
		{
			for (int o = 0; o < 18; o++)
				cout << "|" << endl;

			cout << endl << "Alrighty, ...Ahem!" << endl;
		}
		else if (*answer == "no" || *answer == "No")
			break;
	}

	// clean-up
	delete answer;
	delete[] highscore;

	return 0;
}