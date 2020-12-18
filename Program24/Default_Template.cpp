#include <iostream>
#include <stdlib.h>
using namespace std;

//Global Variables
char cards[10]{ 'A','B','C','D','E', 'A', 'B', 'C', 'D', 'E' };
bool cards_found[10]{false, false, false ,false, false, false, false, false, false, false };

int attempt_count;

////Prototypes
void game_board();
void draw_board_parameters(int guess1, int guess2);

//Defining Functions
void draw_board() {
	system("cls");
	cout << "Your attempt count is: "<<attempt_count;

	for (int i = 0; i < 10; i++)
	{
		if (cards_found[i])
		{
			cout << "[" << cards[i] << "]";
		}
		else
		{
			cout << "[" << i+1 << "]";
		}
	}
}

void draw_board_parameters(int guess1, int guess2)
{
	system("cls");
	/*cout << "Your attempt count is: " << attempt_count;*/
	for (int i = 0; i < 10; i++)
	{
		if (cards_found[i])
		{
			cout << "[" << cards[i] << "]";
		}
		else
		{
			cout << "[" << i + 1 << "]";
		}
	}
}

int main()
{
	int score=0;
	bool isplaying=true;

	while (isplaying) {
		//draw_board();
		int guess1;
		int guess2;
		cout << "Select 1st value: ";
		cin >> guess1;
		/*draw_board_parameters(guess1, 0);*/
		cout << "\nSelect 2nd value: ";
		cin >> guess2;
		draw_board_parameters(guess1, guess2);
		cout <<"\nGuess1 (0 to 9): "<< cards[guess1]<<endl;
		cout << "Guess2 (0 to 9): " << cards[guess2] << endl;

		if (cards[guess1] == cards[guess2]) 
		{
			score++;
			cards_found[guess1-1]= true;
			cards_found[guess2 - 1] = true;

			cout << "Matched!" << endl;
		}
		else {
			cout << "Doesnt match!" << endl;
		}
		if (score == 5)
		{
			cout << "You won!!"<<endl;
			break;
		}
	}



	return 0;
}