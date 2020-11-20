#include <iostream>
using namespace std;

int largest(int array1[]);
int largest(int array1[]) {	
	int large = array1[0];
	int pos;
	cout << "\nFinding the greatest number: " << endl;
	for (int i = 0; i < 5; i++) {
		if (large < array1[i])
		{
			large = array1[i];
		}
		pos = i;
	}
	cout << "The largest no. is: " << large << " is located at position: " << pos << endl;
	return large;
}

int main()
{
	int array1[5];
	int i = 0;
	while (i <5) {
		cout << "Input element " << i << ". ";
		cin >> array1[i];
		i++;
	}
	cout << "\nincreasing order: " << endl;
	for (int j = 0; j < 5; j++) {
		cout << j << ". element is: " << array1[j] << endl;
	}
	cout << "\ndecreasing order: " << endl;
	for (int k = 4; k >= 0; k--) {
		cout << k << ". element is: " << array1[k] << endl;
	}
		cout<<largest(array1);
	return 0;
}