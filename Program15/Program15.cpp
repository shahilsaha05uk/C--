#include <iostream>

using namespace std;

int main() {
	char select;
	int num;
	cout << "Input num from 1 to 10: ";
	cin >> num;
	//loop
	if (num <= 10) 
	{
		for (int i = 0; i < num; i++) 
		{
			for (int j = 0; j <= i; j++) 
			{
				cout << "* ";
			}
			cout << endl;
		}
	}
	else 
	{
		cout << "Try Again!!!" << endl;
	}
	do {
		cout << "Do you want to try again?";
		cin >> select;
		if (select == 'y') {
			cout << "Input num from 1 to 10: ";
			cin >> num;
			//loop
			if (num <= 10)
			{
				for (int i = 0; i < num; i++)
				{
					for (int j = 0; j <= i; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}
			}
			else
			{
				cout << "Try Again!!!" << endl;
			}
		}
	} while (select != 'n');
		cout << "Thanks!!"<<endl;
	return 0;
}