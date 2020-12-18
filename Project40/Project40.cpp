#include <iostream>
#include "Animals.h"

using namespace std;

int main()
{
    Animals animal_1(5);

    Animals* animal_2 = new Animals(10);

    cout << "animal 1 is " << animal_1.GetAge() << " years old. " << endl;
    cout << "animal 2 is " << animal_2->GetAge() << " years old. " << endl;

    delete animal_2;
}

