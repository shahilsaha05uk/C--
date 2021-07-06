#include "Base.h"


Base::Base()
{
    while (true)
    {
        OptionManager();
    }
}
Base::~Base()
{

}

void Base::OptionManager()
{
    // Main Menu
    cout << "Welcome to the Bank!! Choose from the following options" << endl;
    cout << "1. Open a new account" << endl;
    cout << "2. View an account" << endl;
    cout << "3. Close an account" << endl;
    cout << "4. Exit" << endl;

    int selection;
    bool b = true;
    while (b== true)
    {
        cin >> selection;
        switch (selection)
        {
        case 1:
            cout << "1. General Account" << endl;
            cout << "2. Junior Account" << endl;
            cout << "3. Savings Account" << endl;
            cout << "4. Return to the main menu" << endl;

            while (true)
            {
                cin >> selection;
                switch (selection)
                {
                case GENERAL:
                    cout << "Welcome to general form" << endl;
                    break;
                case JUNIOR:
                    cout << "Welcome to junior form" << endl;
                    break;
                case SAVINGS:
                    cout << "Welcome to savings form" << endl;
                    break;
                case 4:
                    break;
                default:
                    cout << "Incorrect selection!! please try again" << endl;
                    break;
                }
                break;
            }
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            b = false;
            cout << "Exit" << endl;
            break;
        default:
            cout << "Incorrect selection!! please try again" << endl;
            break;
        }
    }
}
