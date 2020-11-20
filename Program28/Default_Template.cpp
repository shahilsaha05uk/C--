#include <iostream>
#include<string>
#include <vector>
using namespace std;

void swap(int choice, vector<string> vec1);
void swap(int choice, vector<string> vec1) {
	if (choice == 0)
	{
		vec1.at(0) = "magic ring";
		cout << "Your updated inventory list: " << endl;
		for (int i = 0; i < vec1.size(); i++)
		{
			cout << vec1.at(i) << endl;
		}
	}
	else if (choice == 1)
	{
		vec1.at(1) = "magic ring";
		cout << "Your updated inventory list: " << endl;
		for (int i = 0; i < vec1.size(); i++)
		{
			cout << vec1.at(i) << endl;
		}
	}
	else if (choice == 2)
	{
		vec1.at(2) = "magic ring";
		cout << "Your updated inventory list: " << endl;
		for (int i = 0; i < vec1.size(); i++)
		{
			cout << vec1.at(i) << endl;
		}
	}
}
int main()
{
	vector<string> inventory{};
	string userType;
	int selection;
	inventory.push_back("Sword");

	for (int i = 0; i < 2; ' ')
	{
		cout << "Type which item you wish to keep: Staff or Knife: ";
		getline(cin, userType);
		inventory.push_back(userType);
		cout << "\nYour inventory holds: " << endl;
		int j = 0;
		while (j < inventory.size())
		{
			cout << inventory.at(j) << endl;
			j++;
		}
		i++;
		cout << "Type which item you wish to keep: Healing Potion or Fire Spell: ";
		getline(cin, userType);
		inventory.push_back(userType);
		cout << "\nYour inventory is full! " << endl;
		cout << "\nYour inventory holds: " << endl;
		int k = 0;
		while (k < inventory.size())
		{
			cout << inventory.at(k) << endl;
			k++;
		}
		i++;
	}

	cout << "\nYou have found a magic ring. What would you like to replace in your inventory? "<<endl;
	int k = 0;
	while (k < inventory.size())
	{
		cout <<k<<". "<< inventory.at(k) << endl;
		k++;
	}
	cin >> selection;
	swap(selection, inventory);





	return 0;
}