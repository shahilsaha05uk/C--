#include <iostream>
#include<string>
#include <fstream>

using namespace std;



int main()
{

	//ifstream infile("outfile.txt"); // Can only take input
	//ofstream outfile("outfile.txt", ios::out); // Can only output
	//fstream file("file.txt");

	////Variables Declared
	//string name = "Shahil";
	//int age;
	//int x = 1;
	//string line;


	//// While the loop runs
	//int i = 0;
	//while(i<x)
	//{
	//	cout << "Input name: ";
	//	getline(cin>>ws, name); //Input name
	//	cout << "Input age: ";
	//	cin >> age; // input age
	//	infile >> name; //send the name to the file
	//	infile >> age; // send the age to the file
	//	outfile << "Name: " << name << endl; // the file is ready to show the name
	//	outfile << "Age: " << age << endl; // the file is ready to show the age
	//	i++;
	//}



	// -----------To read from the file

	////Declare and initialise the file storing variables
	//ifstream infile("outfile.txt", ios::in); // Can only take input
	//ofstream outfile("outfile.txt", ios::out); // Can only output
	//fstream file("file.txt");

	//// declare normal variables to store the user input
	//string name = "Shahil";
	//int age;
	//int x = 1;
	//string line;

	////while loop to take user input and store them in the file
	//int i = 0;
	//while (i < x)
	//{
	//	cout << "Input name: ";
	//	getline(cin >> ws, name);
	//	cout << "Input age: ";
	//	cin >> age;
	//	infile >> name;
	//	infile >> age;
	//	outfile << "Name: " << name << endl;
	//	outfile << "Age: " << age << endl;
	//	i++;
	//}
	//outfile.close();


	////create a file storing variable to read from the file
	//ifstream readfile("outfile.txt");

	////said if the condition is true then while it reads, it outputs from the fine to the cmd console
	//if (readfile.is_open())
	//{
	//	cout << "Its opened" << endl;
	//	while (getline(readfile, line))
	//	{
	//		cout << line << endl;
	//	}

	//	infile.close();
	//}
	//else
	//{
	//	cout << "File could not be opened" << endl;
	//}




	// To see the size of the file at positions:

		//Declare and initialise the file storing variables
	ifstream infile("outfile.txt", ios::binary); // Can only take input
	ofstream outfile("outfile.txt", ios::out); // Can only output
	fstream file("file.txt");

	// declare normal variables to store the user input
	int x = 4;
	infile >> x;

	streampos begin, end;

	if (!infile.is_open())
	{
		cerr << "File not opened" << endl;
		exit(1);
	}

	begin = infile.tellg(); // Current position

	cout << "Begin: " << begin << endl;

	infile.seekg(0, ios::end);

	end = infile.tellg();

	cout << "End: " << end << endl;

	infile.close();

	cout << "The size is: " << (end - begin) << "bytes \n";

	return 0;
}