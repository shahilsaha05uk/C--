#include <iostream>
using namespace std;

void plus25(int &n);
void minus25(int &n);

void plus25(int& n)
{
	n += 25;
}
void minus25(int& n)
{
	n -= 25;
}

int main()
{
	int num;
	int& rnum= num;

	cout << "Enter a num: ";
	cin >> num;
	cout << "The value of num is: " << num << endl;
	plus25(rnum);
	cout << "After adding 25: " << num << endl;

	cout << "Enter a num: ";
	cin >> num;
	cout << "The value of num is: " << num << endl;
	minus25(rnum);
	cout << "After subtracting 25: " << num << endl;

	return 0;
}