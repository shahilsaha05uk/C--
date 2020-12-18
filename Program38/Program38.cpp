#include <iostream>
#include <string>
#include <time.h>
#include<fstream>


using namespace std;


struct details
{
    string name;
    int account_number;
    double balance;

};



int main()
{
    details NewAccount;
    details SavingAccount;

    bool a = false;
    bool b = false;

    int user_choice = 0;
    char enter_YesNo;

    ifstream inFile; // ("Program38.txt", ios::in);
    ofstream outFile("Program38.txt", ios::out | ios::app);

    int i = 0;

    while (a != true)
    {



        cout << "1. enter new details" << endl;
        cout << "2. Display the content of the file" << endl;
        cout << "3. Display accounts that have balance over 10,000" << endl;
        cout << "4. Exit the program" << endl;



        cin >> user_choice;



        switch (user_choice)
        {
        case 1:

            while (b != true)
            {

                if (outFile.is_open())
                {
                    cout << "Enter name: ";
                    getline(cin >> ws, NewAccount.name);
                    cout << "Enter account_number: ";
                    cin >> NewAccount.account_number;
                    cout << "Enter balance: ";
                    cin >> NewAccount.balance;



                    outFile << NewAccount.name << endl;
                    outFile << NewAccount.account_number << endl;
                    outFile << NewAccount.balance << endl;
                }
                cout << "Do you want to enter more details? ";
                cin >> enter_YesNo;
                if (enter_YesNo == 'N' || enter_YesNo == 'n')
                {
                    b = true;
                }
                outFile.close();

            }
            break;
        case 2:
            b = false; //reset to false so choices can be made again
            while (b != true)
            {
                inFile.open("Program38.txt");
                if (inFile.is_open())
                {
                    while (inFile >> SavingAccount.name, inFile >> SavingAccount.account_number,
                        inFile >> SavingAccount.balance)
                    {
                        cout << SavingAccount.name << endl;
                        cout << SavingAccount.account_number << endl;
                        cout << SavingAccount.balance << endl;
                        //b = true;
                        //break;
                    }
                    break;
                }
                else
                {
                    cout << "Couldnt open" << endl;
                }
            }
            inFile.close();
            break;
        case 3:
            b = false;
            while (b != true)
            {
                inFile.open("Program38.txt");
                while (inFile >> SavingAccount.name, inFile >> SavingAccount.account_number,
                    inFile >> SavingAccount.balance)
                {
                    if (SavingAccount.balance > 10000)
                    {
                        cout <<"Name: "<< SavingAccount.name << endl;
                        cout <<"Account Number: "<< SavingAccount.account_number << endl;
                        cout <<"Balance: "<< SavingAccount.balance << endl;
                    }
                }
                break;
            }
            break;
        case 4:
            cout << "Thank You!!" << endl;
            exit(0);
            break;
        default:
            cout << "invalid choice! Try again!!" << endl;
        }
    }







    return 0;
}