#include <iostream>
using namespace std;
int main() {

	//number variable declare and input
	float num1;
	float num2;
	cout << "Input num1: ";
	cin >> num1;
	cout << "Input num2: ";
	cin >> num2;

	//sum and mean
	float sum = num1 + num2;
	float mean = sum / 2;

	//output
	cout << "the sum of " << num1 << " + " << num2 << " is: " << sum << endl;
	cout << "the mean is " << mean << endl;

	float temp_num{0};
	int count{ 2 };
	do {
		cout << "Input num: ";
		cin >> temp_num;
		count++;
		sum += temp_num;
		cout << "The sum is: " << sum << endl;
		cout << "The mean is: " << sum / count << endl;
	} while (count != -1 && temp_num != 0);
	cout << "Thanks!! " << endl;

}

