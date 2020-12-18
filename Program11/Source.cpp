#include<iostream>

using namespace std;

int main()
{
	int selection;

	cout << "1. Sunny" << endl;
	cout << "2. Cloudy" << endl;
	cout << "3. Raining" << endl;
	cout << "4. Exit" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1:
		cout << "Dont forget your sunscreen" << endl;
		break;
	case 2: 
		cout << "I may rain, have an umbrella" << endl;
		break;
	case 3:
		cout << "Its raining outside, grab an umbrella or rain coat" << endl;
		break;
	case 4:
		cout << "Thank you" << endl;
		break;
	default:
		cout << "Invalid input!! Try again" << endl;
		break;
	}

	return 0;
}