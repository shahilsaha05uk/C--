// ZigZagProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string convert(string s, int numRows);

string convert(string s, int numRows) 
{
	string zigZagStr;

	for (size_t i = 0; i < numRows; i++)
	{
		zigZagStr += s[i];
		zigZagStr += "\n";
	}

	return zigZagStr;
}


int main()
{
	cout << convert("PAYPALISHIRING", 3);
}