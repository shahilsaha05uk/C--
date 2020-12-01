#include <iostream>
#include <string>
using namespace std;

struct personal_details
{
	string name;
	int age;
	string telephone;
	void PrintDetails(string fullname, int person_age, string phone)
	{
		fullname = name;
		person_age = age;
		phone = telephone;
		cout << "Name is: " << fullname << endl;
		cout << "Age is: " << person_age << endl;
		cout << "Phone: " << phone << endl;
	}
};

personal_details person;

int main()
{

	cout << "Enter full name: ";
	getline(cin, person.name);

	cout << "Enter your age: ";
	cin >> person.age;

	cout << "Enter your Phone number: ";
	getline(cin>>ws, person.telephone);



	person.PrintDetails(person.name, person.age, person.telephone);
	return 0;
}


