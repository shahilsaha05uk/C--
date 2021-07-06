#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

void printCharArray(const char* a, const char* b, int* c)
{
	cout << "A: " << a << " B: " << b << " C: " << *c << endl;
}


int main() {
	// strstr and strchr


	const char mainString[200] = "Welcome to A world of Fantasy and welcome to A world of C";
	const char* findingString = mainString;
	const char* resultString;


	resultString = strchr(mainString, 'o');
	if (resultString == NULL)
	{
		//Print statements
	}
	else
	{
		//cout << "Result string: " << resultString << endl;
	}

	int count = 0;
	while ((findingString = strchr(findingString, 'A')) != NULL)
	{
		//Print statements
		findingString++;
		count++;
	}

	//Print statements
	cout << "Occurence count: " << count << endl;


	//char HelloString[200] = "Hello";
	//char WorldString[20] = "World";
	//int c = 20;
	//printCharArray(HelloString, WorldString, &c);

	return 0;
}
