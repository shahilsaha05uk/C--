#include <iostream>
#include<ctime>
#include<string>
using namespace std;

string str(string name);
string str(string name)
{
	string username;
	srand(time(NULL));
	int num = rand();
	username= name+ to_string(num);
	return username;
}
int main()
{
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "The name is taken!"<<endl;
	cout<<str(name)<<endl;
	return 0;
}