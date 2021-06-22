#include <stdio.h>
#include <cstring>
#include <iostream>
#include <vector>
#include <array>
using namespace std;

typedef int myInt;
typedef float myFloat;
typedef string myString;
typedef char myChar;
typedef vector<int> vecA;
typedef int myArray[];
int main()
{
	myInt a = 10;
	myString b = "Shahil Saha";
	vecA c;
	myArray d = { 10,20,30,40,50,60 };


	c.push_back(1000);

	cout << a << endl;
	cout << b << endl;
	cout << c.at(0) << endl;
	int i = 0;


}