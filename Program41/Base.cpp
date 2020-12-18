#include "Base.h"


Base::Base()
{
	tempVar = 0;
	srand(time(NULL));
	
}

Base::~Base()
{

}

float Base::InterestRate(int accountType)
{
	float interestRate=0;
	if (accountType == 1)
	{
		interestRate = 10.0f/100.0f;
		return interestRate;
	}
	if (accountType == 2)
	{
		interestRate = 1.5f / 100.0f;
		return interestRate;
	}
	if (accountType == 3)
	{
		interestRate = 5.5f / 100.0f;
		return interestRate;
	}
	
}

int Base::RandomNumberGenerator()
{
	int randomNumber;
	randomNumber = rand() % 1000;
	
	return randomNumber;
}


void Base::DisplayAccountDetails()
{
	int linecount = 0;
	b = false;
	while (b != true)
	{
		infile.open("Account Log.txt");

		cout << "Enter your Account Number: \n";
		cin >> inputAccountNumber;
		while (infile >> _SaveAccount.account_number >> _SaveAccount.Forname >> _SaveAccount.Surname >> _SaveAccount.Address >> _SaveAccount.Balance>>  _SaveAccount.InterestRate)
		{
			getline(infile, getlines);

			if (inputAccountNumber == _SaveAccount.account_number)
			{
				cout << "\nAccount Number: " << _SaveAccount.account_number << endl;
				cout << "FirstName: " << _SaveAccount.Forname << endl;
				cout << "Surname: " << _SaveAccount.Surname << endl;
				cout << "Address: " << _SaveAccount.Address << endl;
				cout << "Interest Rate: " << _SaveAccount.InterestRate << endl;
				cout << "Balance: " << _SaveAccount.Balance << endl;

				b = true;
				break;
			}
			else
			{
				cout << "Account not found!!" << endl;
			}

		}
		break;
	}
	infile.close();
}


void Base::DeleteAccount()
{
	vector<Edit> _editDetails;
	int i = 0;
	bool b = false;
	string line;
	int num;
	int temp;

	while (b != true)
	{
		infile.open("Account Log.txt");

		if (infile.is_open())
		{
			while (infile >> _SaveAccount.account_number)
			{
				getline(infile, line);
				_editDetails.push_back(Edit());
				_editDetails.at(i).accountNumber= _SaveAccount.account_number;
				_editDetails.at(i).line = line;
				cout << _editDetails.at(i).accountNumber << " " << _editDetails.at(i).line << endl;
				i++;
			}
		}
		break;
	}
	infile.close();

	int vecSize = _editDetails.size();

	cout << "input num: ";
	cin >> num;

	for (int i = 0; i < vecSize; i++)
	{
		if (num == _editDetails.at(i).accountNumber)
		{
			_editDetails.erase(_editDetails.begin() + i);
			break;
		}
	}
	vecSize = _editDetails.size();

	//Writing to the new file
	tempfile.open("temp.txt");
	for (int i = 0; i < vecSize; i++)
	{
		tempfile << _editDetails.at(i).accountNumber << "" << _editDetails.at(i).line << endl;
	}
	tempfile.close();

	if (outFile.is_open())
	{
		outFile.close();
	}
	if (infile.is_open())
	{
		infile.close();
	}


}
