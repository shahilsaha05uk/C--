#include <iostream>
using namespace std;
int main()
{
    int playerLife = 100;
    int decrease_value;
    cout << "Player life: " << playerLife << endl;
    int i = 0;
    while (i != 10 && playerLife!=0) {
        cout <<"Question "<<i <<". How much health to decrease? ";
        cin >> decrease_value;
        playerLife -= decrease_value;
        if (playerLife != 0 && i==9) 
        {
            cout << "All questions asked. Player Survived!" << endl;
        }
        else if(playerLife == 0 && i<10) {
            cout << "Early end. Player Died!" << endl;
        }
        i++;
        cout << "Health after decrease: " << playerLife << endl;

    }
}

