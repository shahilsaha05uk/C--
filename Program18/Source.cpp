#include <iostream>
using namespace std;

int smallestNumber(int a, int b);

int main()
{
	int val1;
	int val2;
	int i{ 0 };

	while (i != 3) {
		cout << "Input val1: ";
		cin >> val1;
		cout << "Input val2: ";
		cin >> val2;

		if (val1 == val2) {
			cout << "Both are equal..."<<endl;
		}
		else {
			cout << "The smallest value is: " << smallestNumber(val1, val2) << endl;
		}
		i++;
	}
	return 0;
}

//Function
int smallestNumber(int a, int b) {

	int temp;
	if (a > b) {
		temp = b;
	}
	else if (b>a) {
		temp = a;
	}
	//else if (b=a) {
	//	cout << "Both are equal...";
	//}

	return temp;
}