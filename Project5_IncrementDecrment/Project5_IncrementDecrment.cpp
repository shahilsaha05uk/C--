#include <iostream>
using namespace std;

int main()
{
	// initialise num to 1

	//using ++a
	int num = 1;

	cout << "num= " << num<<"\n";
	cout << "increment: " << ++num << endl;
	cout << "new value: " << num << endl;
	cout << endl;
	// reset to 1
	// using a++
	num = 1;

	cout << "num= " << num << "\n";
	cout << "increment: " << num++ << endl;
	cout << "new value: " << num << endl;
	cout << endl;
	//reset to 1
	//using --a
	num = 1;
	cout << "num= " << num << "\n";
	cout << "increment: " << --num << endl;
	cout << "new value: " << num << endl;
	cout << endl;
	
	/* reset to 1
	using a-- */
	num = 1;
	cout << "num= " << num << "\n";
	cout << "increment: " << num-- << endl;
	cout << "new value: " << num << endl;
	cout << endl;
	return 0;
}
