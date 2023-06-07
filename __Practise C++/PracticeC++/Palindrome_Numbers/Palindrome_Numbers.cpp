#include <iostream>

using namespace std;

bool isPalindrome(int x) {

	long long int copy = x;
	long long int rev = 0;
	while (x != 0) {
		long long int rem;
		rem = x % 10;
		rev = rev * 10 + rem;
		x = x / 10;

	}



	return false;
}



int main()
{
	int num1 = 121;
	int num2 = -121;
	int num3 = 10;
	int num4 = 0;

	cout << num1 << " palindrom status: " << isPalindrome(num1) << endl;
	//cout << num2 << " palindrom status: " << isPalindrome(num2) << endl;
	//cout << num3 << " palindrom status: " << isPalindrome(num3) << endl;
	//cout << num4 << " palindrom status: " << isPalindrome(num4) << endl;


}
