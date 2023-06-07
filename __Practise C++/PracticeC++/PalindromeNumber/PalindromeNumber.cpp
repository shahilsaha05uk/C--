#include <iostream>

using namespace std;

/*

1st: find the remainder when the number is divided by 10
2nd: multiply the self number by 10 and add the remainder in step 1
3rd: divide the number by 10

Loop it until the number is greater than 0
*/


bool isPalindrome(int number)
{
	int reversedNumber = 0;
	int originalNumber = number;

	while (number > 0)
	{
		int digit = number % 10;

		reversedNumber = reversedNumber * 10 + digit;

		number /= 10;
	}

	return (reversedNumber == originalNumber);
}


int main()
{
	cout << "123 Is Palindrome?: " << isPalindrome(123) << endl;
}
