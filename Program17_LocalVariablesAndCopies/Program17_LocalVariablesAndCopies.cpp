#include <iostream>
using namespace std;

void addTwo(int num)
{
	//add two to the number
	num += 2;
	//output the content of num within the function
	cout << "FUNCTION num = " << num << endl;
}



int main()
{
	int myNum = 6;
	cout << "MAIN [before]: myNum = " << myNum << endl;

	addTwo(myNum);
	cout << "MAIN [before]: myNum = " << myNum << endl;

	return 0;
}
