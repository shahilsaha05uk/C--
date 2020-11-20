#include <iostream>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";
	char selection;

	cout << "You have picked up a wizard's staff... Would you like to swap it for the dagger in their inventory?(Y/N) "<<endl;
	cin >> selection;
	if (selection == 'Y' || selection=='y') {
		inventory[3] = "wizard";

		for (int i = 0; i < 4; i++) {
			cout << inventory[i] << endl;
		}
	}
	else if (selection == 'N' || selection == 'n') {
		cout << "You have left the item behind! " << endl;
		for (int i = 0; i < 4; i++) {
			cout << inventory[i] << endl;
		}
	}
	return 0;
}