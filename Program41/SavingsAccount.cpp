#include "SavingsAccount.h"


SavingsAccount::SavingsAccount()
{


}

SavingsAccount::~SavingsAccount()
{

}


void SavingsAccount::newSavingsAccount()
{
		outFile.open("Account Log.txt", ios::app);
		while (!outFile.eof())
		{
			for (int i = 0; i < 1; i++)
			{
				_NewAccount.push_back(AccountDetails());
				cout << "\n* Savings Account *\n" << endl;
				_NewAccount.at(i).account_number = rand() % 1000;
				cout << "Your account number: " << _NewAccount.at(i).account_number << endl;
				cout << "Enter your name: ";
				getline(cin >> ws, _NewAccount.at(i).Forname);
				cout << "Enter your surname: ";
				getline(cin >> ws, _NewAccount.at(i).Surname);
				cout << "Address: ";
				getline(cin >> ws, _NewAccount.at(i).Address);
				cout << "The interest is: " << setprecision(3) << InterestRate(3) << endl;

				cout << "Balance: ";
				cin >> _NewAccount.at(i).Balance;
				if (_NewAccount.at(i).Balance <= 0)
				{
					break;
				}

				outFile << _NewAccount.at(i).account_number << " " << _NewAccount.at(i).Forname << " " << _NewAccount.at(i).Surname << " " << _NewAccount.at(i).Address << " " << _NewAccount.at(i).Balance << " " << setprecision(3) << InterestRate(3) << " " << _NewAccount.at(i).Account_Type[2] << endl;
			}
			break;
		}
}