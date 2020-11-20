#include <iostream>
using namespace std;

int main(){

	int array1[10];
	for (int i = 0; i < 10; i++) {
		cout << i << ". Input value: ";
		cin >> array1[i];
	}


	int Tempvar=array1[0];
	int pos;
	for (int j = 0; j < 10; j++) {

		if (Tempvar> array1[j]) {
			Tempvar = array1[j];
		}
		pos = j;
	}
	cout << "The smallest no. is: " << Tempvar <<" is located at position "<<pos<< endl;

	return 0;
}