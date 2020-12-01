#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int &integer2, int* pointer);

void inputDetails(int* n1, int* n2)
{
	int num1{ 0 };
	int num2{ 0 };

	n1 = &num1;
	n2 = &num2;
}
void outputDetails(int& integer1, int& integer2, int* pointer)
{

	cout << "integer1: " << integer1 << endl;
	cout << "Address of integer1: " << &integer1 << endl;
	cout << "integer2: " << integer2 << endl;
	cout << "Address of integer2: " << &integer2 << endl;

	cout << "pNum current value: " << pointer << endl;
	cout << "pNum dereferenced value: " << *pointer << endl;
	cout << "pNum address value: " << &pointer << endl;
}
int main()
{
	int num1;
	int num2;
	int* pNum= new int;

	cout << "Input num1: ";
	cin >> num1;
	cout << "Input num2: ";
	cin >> num2;

	inputDetails(&num1, &num2);

	pNum = &num1;
	outputDetails(*pNum, num2, pNum);

	cout << endl;
	pNum = &num2;
	outputDetails(num1, *pNum, pNum);

	return 0;
}