#include <iostream>
#include<string>
#include <cctype>
using namespace std;
int main()
{
	char name[1000];
	cout << "Enter you name: ";
	cin.getline(name, 1000);

	for (int i = 0; i <= strlen(name); i++)
	{
		if (name[i] == ' ')
		{
			cout << endl;
			continue;
		}
		cout << name[i];
	}
	cout << endl;
	return 0;
}