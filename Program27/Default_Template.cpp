#include <iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	string str1= "Do you know who loves C++ XX does!";
	cout << "Enter a name: ";
	getline(cin, name);	

	for (int i = 0; i < str1.length(); i++)
	{
		if (str1.at(i) == 'X') 
		{	
			str1.insert(i+1, name);
			break;
		}
	}
	cout << str1;
	return 0;
}