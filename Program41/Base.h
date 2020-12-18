#pragma once

#ifndef _BASE_
#define _BASE_

#include <iostream>
#include<fstream>
#include <string>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
#include <stdio.h>
#include <vector>
#include <iomanip>

using namespace std;



struct AccountDetails
{
	//Variables
	int account_number;
	string Surname;
	string Forname;
	string Address;
	float Balance;
	float InterestRate;
	string Account_Type[3] = {"GENERAL","SAVINGS", "JUNIOR"};

	//File Variables
};

struct Edit
{
	int accountNumber;
	string line;
};


class Base
{
private:

public:
	Base();
	~Base();


	enum AccountType
	{
		JUNIOR = 1, SAVINGS, GENERAL
	};

	AccountType _accountType;
	vector<AccountDetails> _NewAccount;
	AccountDetails _SaveAccount;

	void DisplayAccountDetails();
	float InterestRate(int accountType);
	void DeleteAccount();

	int RandomNumberGenerator();

	ifstream infile;
	ofstream outFile;

	ofstream tempfile;

	// Variables for case 2
	int inputAccountNumber;


	string getlines;
	int storedValue;
	int tempVar;
	bool b = false;
	//Type Compare
	const type_info& InputVal = typeid(inputAccountNumber);
	const type_info& StoredVal = typeid(tempVar);
	int case1_selection;

};

#endif // !_BASE_