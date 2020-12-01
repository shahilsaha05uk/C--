#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main()
{
	//Reference
	int temp;
	int num1 = 5;
	int num2 = 20;

	int& rnum1 = num1;
	int& rnum2 = num2;


	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "rnum: " << rnum1 << endl;
	cout << "rnum2: " << rnum2 << endl;
	cout << endl;

	temp = rnum1;
	rnum1 = rnum2;
	num2 = temp;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "rnum: " << rnum1 << endl;
	cout << "rnum2: " << rnum2 << endl;
	cout << endl;


	//Pointers
	int a = 5;
	int* point_a = &a;

	cout << "a: " << a << endl;
	cout << "pointer a using *: " << *point_a << endl;
	cout << "pointer a using &: " << &point_a << endl;
	cout << "pointer a: " << point_a << endl;

	return 0;
}