#include "Shortcut.h"
#include "ScoreUpdater.h"

int main()
{
	score scr;

	int boardSize = 6;

	int * playerscore = &scr.playerScore;//Pointers for playerName and playerScore
	string * playerName = &scr.playerName;

	string * answer = new string;
	*answer = "";

	int* highscore = new int[boardSize]; //Initiation of the scores and names on the ScoreBoard
	string* highnames = new string[boardSize];

	highscore[0] = 900;
	highscore[1] = 850;
	highscore[2] = 750;
	highscore[3] = 600;
	highscore[4] = 450;
	highscore[5] = 300;
	highnames[0] = "Bot1";
	highnames[1] = "Bot2";
	highnames[2] = "Bot3";
	highnames[3] = "Bot4";
	highnames[4] = "Bot5";
	highnames[5] = "Bot6";

	while (true)
	{
		//----------------------------------------------------This Shows the ScoreBoard:

		cout << "Welcome to Source's Reliable ScoreBoard! Here's how the Board looks now!" << endl << endl;

		cout << "ScoreBoard:" << endl;

		for (int p = 0; p < boardSize; p++)//Originally displayed the board-----------------------------
		{
			cout << highnames[p] << " with " << highscore[p] << " points." << endl;
		}
		
		//-----------------------------This part will ask for the player's Name and Score:
		
		cout << endl << "Type in your name for the ScoreBoard!" << endl;

		cin >> *playerName;

		cout << endl << "Ok! " << *playerName << ", Whats the Highest score you've gotten on ANY video-game EVER?" << endl;

		cin >> *playerscore;

		cout << endl << "Alrighty now lets see if you made it unto the top 9..." << endl << endl;



		//This part will determine if the player's score is worthy of being put on the board:


		//ChecknUpdate(playerscore, highscore, highnames, playerName, boardSize);

		highnames = CopyMethodString(highnames, boardSize, playerName);
		//highscore = CopyMethodInt(highscore, boardSize, playerscore);

		boardSize++;

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
	delete[] highnames;
	delete[] highscore;

	return 0;
}