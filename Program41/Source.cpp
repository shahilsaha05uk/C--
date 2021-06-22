#include "Base.h"
#include "JuniorAccount.h"
#include "GeneralAccount.h"
#include "SavingsAccount.h"

int main()
{
	Base* global = new Base();

	GeneralAccount* _general = new GeneralAccount();
	JuniorAccount* _junior = new JuniorAccount();
	SavingsAccount* _saving = new SavingsAccount();

	//Accunts
	srand(time(NULL));


	//Variables
	int user_selection;
	bool program_running = true;

	//Loop Starts
	while (program_running != false)
	{

		//Displays the main menu
		cout << "1. Open a Bank Account" << endl;
		cout << "2. View an account" << endl;
		cout << "3. Close an account" << endl;
		cout << "4. Exit Program" << endl;
		cout << endl;

		//Input user selection
		cout << "Enter your selection: ";
		cin >> user_selection;

		switch (user_selection)
		{
		case 1: //ONLY WRITE TO THE FILE

			global->b = false;
			while (global->b != true)
			{
				global->outFile.open("Account Log.txt", ios::app);
				while (!global->outFile.eof())
				{
					cout << "\n1. General Account" << endl;
					cout << "2. Junior Account" << endl;
					cout << "3. Savings Accounts" << endl;
					cout << "4. Return to Main Menu" << endl;
					cout << "\nEnter your case1 selection: ";
	
					cin >> global->case1_selection;

					if (global->case1_selection == 1)
					{
						_general->newGeneralAccount();
						break;
					}
					if (global->case1_selection == 2)
					{
						_junior->newJuniorAccount();
						break;
					}
					if (global->case1_selection == 3)
					{
						_saving->newSavingsAccount();
						break;
					}
					if (global->case1_selection == 4)
					{
						global->b = true;
						break;
					}


				}

				break;
		case 2:
			global->DisplayAccountDetails();

			break;
		case 3:

			global->DeleteAccount();

			if (global->outFile.is_open())
			{
				global->outFile.close();
			}
			if (global->infile.is_open())
			{
				global->infile.close();
			}

			remove("Account Log.txt");
			rename("temp.txt", "Account Log.txt");

			break;
		case 4:

			program_running = false;

			break;
		default:
			cout << "Invalid input!! Please try again" << endl;
			break;
			}
		}

	}

	return 0;
}