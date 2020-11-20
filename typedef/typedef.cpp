// typedef.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;
	cout << "Input number a: ";
	cin >> a;
	cout << "Input number b: " ;
	cin >> b;

	cout << "Value stored in 'a' is:" << a << endl;
	cout << "Value stored in 'b'is: " << b << endl;

	float my_float1, my_float2;
	my_float2 = 9.9f;

	cout << "Input 1st float: ";
	cin >> my_float1;

	cout << "1st float is: " << my_float1 << endl;
	cout << "2nd float is: " << my_float2 << endl;

	char mychar = 'a';
	cout << "Value stored in char is: " << mychar << endl;

	return 0;

}
