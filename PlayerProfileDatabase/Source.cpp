#include "Shortcut.h"
#include "ScoreUpdater.h"

int main()
{
	score scr;

	string * ptrplayerName = &scr.playerName; //Pointers for playerName and playerScore
	int * ptrplayerscore = &scr.playerScore;

	int highscore[] = { 800, 500, 450, 400, 350, 300, }; //Initiation of the scores and names on the ScoreBoard
	string highnames[] = {"Bot1" ,"Bot2" ,"Bot3" ,"Bot4" ,"Bot5" ,"Bot6"};

	string * answer = new string;
	*answer = "";
	
	while (true)
	{
		//----------------------------------------------------This Shows the ScoreBoard:

		cout << "Welcome to Source's Reliable ScoreBoard! Here's how the Board looks now!" << endl << endl;

		cout << "ScoreBoard:" << endl;

		for (int p = 0; p < 6; p++)
			cout << highnames[p] << " with " << highscore[p] << " points." << endl;
		
		//-----------------------------This part will ask for the player's Name and Score:
		
		cout << endl << "Type in your name for the ScoreBoard!" << endl;

		cin >> *ptrplayerName;

		cout << endl << "Ok! " << *ptrplayerName << ", Whats the Highest score you've gotten on ANY video-game EVER?" << endl;

		cin >> *ptrplayerscore;

		cout << endl << "Alrighty now lets see if you made it unto the top 9..." << endl << endl;



		//This part will determine if the player's score is worthy of being put on the board:

		ChecknUpdate(ptrplayerscore, highscore, highnames, ptrplayerName,6);

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

	return 0;
}