#include <iostream>
#include<fstream>
#include <string>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
#include <stdio.h>
#include <sstream>
#include <vector>
using namespace std;





int main() {


	int num;
	bool b = false;
	string blank = { " " };
	string read;
	int readNum;
	fstream file;
	string tempstring;
	ofstream temp;

	vector<string> storestring;

	cout << "Enter the year you want to delete: ";
	num=2020;


	while (b != true)
	{
		file.open("source.txt");
		while (getline(file, read))
		{
			
		}
		break;
	}
	file.close();
}