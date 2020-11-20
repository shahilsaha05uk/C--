#include <iostream>
#include<string>
using namespace std;
int main()
{
	string sentence;
	cout << "Enter a sentence: ";
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence.at(i) == 'e')
		{
			sentence.at(i) = 'X';
		}
		cout << sentence.at(i);
	}
	cout << endl;
	return 0;
}