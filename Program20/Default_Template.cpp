#include <iostream>
using namespace std;

//Global Variables
int player_health = 1000;
int enemy_health = 2000;
bool playing = true;

//Function Prototypes
void attack_choice(int choice_play);
bool playState();

//Defining function
void attack_choice(int choice_play) {

	const int attack_choice = choice_play;
	const int sword_damage = 300;
	const int magic_damage = 650;
	const int axe_damage = 450;

	const int troll_sword = 350;
	const int troll_magic = 50;
	const int troll_axe = 100;

	switch (attack_choice)
	{
	case 1:
		enemy_health -= sword_damage;
		player_health -= troll_sword;
		cout << "\nYou hit the troll\n"<<endl;
		if (player_health <= 0){
			player_health = 0;
			enemy_health = 0;
		}
		else if (enemy_health <= 0) {
			enemy_health = 0;
		}
		cout << "Player health: " << player_health << endl;
		cout << "Enemy health: " << enemy_health << endl;
		break;
	case 2:
		enemy_health -= magic_damage;
		player_health -= troll_magic;
		cout << "\nYou hit the troll\n" << endl;
		if (player_health <= 0) {
			player_health = 0;
		}
		else if (enemy_health <= 0) {
			enemy_health = 0;
		}
		cout << "Player health: " << player_health << endl;
		cout << "Enemy health: " << enemy_health << endl;
		break;
	case 3:
		enemy_health -= axe_damage;
		player_health -= troll_axe;
		cout << "\nYou hit the troll\n" << endl;
		if (player_health <= 0) {
			player_health = 0;
		}
		else if (enemy_health <= 0) {
			enemy_health = 0;
		}
		cout << "Player health: " << player_health << endl;
		cout << "Enemy health: " << enemy_health << endl;
		break;
	}
}

bool playState() 
{
	char play_again;
	if (enemy_health <= 0) 
	{
		cout << "\nYou have killed the troll and won!!" << endl;
		cout << "\nDo you want to play again?(Y/N)";
		cin >> play_again;

		//COULD BE PROBLEM
		if (play_again == 'y' || play_again == 'Y') 
		{
			player_health = 1000;
			enemy_health = 2000;
			return playing= true;
		}
		else if (play_again == 'N' || play_again == 'n')
		{
			//COULD BE PROBLEM
			return playing = false;
		}
	}
	if (player_health <= 0) 
	{
		cout << "\nYou have been killed!!" << endl;
		cout << "\nDo you want to play again?(Y/N): ";
		cin >> play_again;
		if (play_again == 'Y' || play_again == 'y') 
		{
			player_health = 1000;
			enemy_health = 2000;
			return playing = true;
		}
		else if (play_again == 'N' || play_again == 'n')
		{
			//COULD BE PROBLEM
			return playing = false;
		}
	}
	return false;
}
int main()
{
	int player_choice;

	while (playing) {
		cout << "\nYou have met a troll!\nYou have 3 attacking options: \n\n1. Use Sword\n2. Use Magic \n3. Use Axe"<<endl;
		cout << "\nSelect an attack: ";
		cin >> player_choice;
		cout << endl;

		// Call attack function
		attack_choice(player_choice);
		//Call play state function
		playState();
	}
	return 0;
}