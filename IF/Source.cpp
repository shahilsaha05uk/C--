	#include <iostream>

	using namespace std;
	int main()
	{
		char user_status;
		int user_gamechoice;

		cout << "Input your status: 's' for student, 't' for teacher, 'o' for others: ";
		cin >> user_status;

		cout << "Which game would you like to play?: ";
		cin >> user_gamechoice;

		if (user_status == 't' || user_status == 's') 
		{
			if (user_gamechoice == 1) 
			{
				cout << "You get 20% discount." << endl;
			}
			if (user_gamechoice == 2) 
			{
				cout << "You get 10% discount." << endl;
			}
		}
		else if (user_status == 'o') {
			cout << "you are not entitled to get the discount!!" << endl;
		}
		return 0;
	}