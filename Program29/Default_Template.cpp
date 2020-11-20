#include <iostream>
#include <string>
#include <vector>
#include<cstdlib>
#include <time.h>
using namespace std;

int main()
{
	string _choiceArray[3]{ "Stone", "Paper","Scissors" };
	string player_selection;
	string bot_selection;
	int rounds=3;
	int bot_point=0;
	int player_point=0;

	int i = 0;
	srand(time(NULL));
	while (i < rounds)
	{
		//Player turn
		cout << "\nwhat do you choose?: ";
		getline(cin, player_selection);

		//Bot turn
		bot_selection = _choiceArray[rand() % 3];
		cout << "Bot chooses: " << bot_selection << endl;

		if (player_selection == bot_selection)
		{
			cout << "Its a draw" << endl;
		}
		if (player_selection == "Scissors" && bot_selection == "Paper" || player_selection == "Paper" && bot_selection == "Stone" || player_selection == "Stone" && bot_selection == "Scissors")
		{
			cout << "Player Scored" << endl;
			player_point++;
		}
		else
		{
			cout << "Bot Scored!" << endl;
			bot_point++;

		}

		cout << "Bot scores: " << bot_point << endl;
		cout << "Player scores: " << player_point << endl;
		cout << "You need " << rounds - player_point << " points to win!" << endl;
		cout << "Bot needs " << rounds - bot_point << " points to win!" << endl;
		i++;
	}

	if (player_point > bot_point)
	{
		cout << "Congratulations! You won!" << endl;
	}
	if (bot_point > player_point)
	{
		cout << "You lost!" << endl;
	}


	return 0;
}