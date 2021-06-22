#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "HelloWorld.h"
using namespace std;


void CountVowels()
{
	char vowels[5] = { 'a','e','i','o','u' };
	int arrSize = sizeof(vowels) / sizeof(vowels[0]);
	char c;
	while (true)
	{
		cin >> c;
		for (int i = 0; i < arrSize; i++)
		{
			if (c == vowels[i])
			{
				cout << "its a vowels" << endl;
			}
			else
			{
				cout << "Its a consonent" << endl;
			}
		}
		if (c == 'q')
			break;
	}
}


int main() {


	cout << "Select one of the following options: " << endl;
	cout << "1. Calculations" << endl;
	cout << "2. cos(x) and marks" << endl;
	cout << "3. Exit" << endl;
	int selection;
	cin >> selection;

	switch (selection)
	{
	case 1:
		CountVowels();
		break;
	case 2:

		break;
	case 3:
		cout << "Thank you for using the system" << endl;
		break;
		
	default:
		break;
	}



	return 0;
}
