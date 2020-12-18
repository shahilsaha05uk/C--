#include <iostream>
#include<string>

using namespace std;



struct Class
{
	int id;
	string name;
	string courseNumber;
};

struct Student
{
	int id;
	string name;
	double gpa;
	int numberofClasses = 3;
	Class* classes;
};

Student* _global;


int main()
{

	Student *student;
	student = new Student[5];

	_global = student;

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter name: ";
		getline(cin, student->name);
		
		cout << "Student name: " << student->name << endl;
	}
	_global = student;


	cout <<"Global stored names: "<< _global->name[0] << endl;
	cout << "Global stored names: " << _global->name[1] << endl;

	return 0;
}

