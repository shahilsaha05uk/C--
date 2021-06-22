#include <iostream>
#include <string>
#include <time.h>
#include<fstream>
#include<array>

using namespace std;

ifstream infile;
ofstream outfile;
ofstream tempfile;
//Functions
int WritingToAFile(string name, int n);
void OutputRecords();
void LoadScore();
int FindingtheSmallest();
void UpdateArrayScore(string name, int score);

struct Records
{
	int score;
	string name;
};
struct Records _records[10];

int WritingToAFile(string name, int n)
{
	string line;
	int score;
	bool b;
	b = false;
	while (b != true)
	{
		outfile.open("Scores.txt", ios::app);

		if (outfile.is_open())
		{
			while (!outfile.eof())
			{
				for (int i = 0; i < 1; i++)
				{

					if (i >= 1)
					{
						b = true;
						break;
					}
					outfile << n << " " << name << endl;
					return n;
				}
				break;
			}
		}
		break;
	}
	outfile.close();
}

void LoadScore()
{
	int smallestValue;
	string line;
	int score;
	bool b = false;
	int i = 0;
	//Loading the scores
	while (b != true)
	{
		infile.open("Scores.txt");


		while (infile >> score)
		{

			getline(infile, line);
			_records[i].score = score;
			_records[i].name = line;
			i++;
			if (i > 9)
			{
				b = true;
				break;
			}
		}
		break;
	}
	infile.close();



}

int FindingtheSmallest()
{
	LoadScore();
	int smallestValue = 0;
	smallestValue = _records[0].score;
	//Checking for Smallest
	for (int i = 0; i < 10; i++)
	{
		if (smallestValue > _records[i].score)
		{
			smallestValue = _records[i].score;
		}
	}
	return smallestValue;
}

void UpdateArrayScore(string name, int score)
{
	int smallValueReplace = FindingtheSmallest();
	int newValue;
	newValue = WritingToAFile(name, score);

	for (int i = 0; i < 10; i++)
	{
		if (smallValueReplace == _records[i].score)
		{
			_records[i].score = newValue;
			_records[i].name = name;
			break;
		}
	}
	tempfile.open("temp.txt");
	for (int i = 0; i < 10; i++)
	{
		tempfile << _records[i].score << "" << _records[i].name << endl;
	}
	tempfile.close();


	if (outfile.is_open())
	{
		outfile.close();
	}
	if (infile.is_open())
	{
		infile.close();
	}
}

void OutputRecords()
{
	string line;
	int score;
	bool b;
	b = false;

	while (b != true)
	{
		infile.open("Scores.txt");

		if (infile.is_open())
		{
			for (int i = 0; i < 10; i++)
			{
				getline(infile, line);
				cout << line << endl;
			}
		}
		break;
	}
	infile.close();
}

int main()
{
	int user_choice;
	bool programloop = false;
	string name;
	int score;
	while (programloop != true)
	{
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit\n" << endl;

		cout << "Choose from the options: ";
		cin >> user_choice;

		switch (user_choice)
		{
		case 1:

			cout << "Enter as name: ";
			getline(cin >> ws, name);
			cout << "Enter a score: ";
			cin >> score;


			WritingToAFile(name, score);
			FindingtheSmallest();
			UpdateArrayScore(name, score);

			remove("Scores.txt");
			rename("temp.txt", "Scores.txt");


			break;

		case 2:

			OutputRecords();

			break;
		case 3:
			cout << "Thanks!!" << endl;
			programloop = true;

			break;
		default:
			cout << "Invalid choice!! Try Again!!" << endl;
			break;
		}
	}
	return 0;
}
