#include <iostream>

using namespace std;
int main()
{

	double F;
	double C;

	cout << "input F: ";
	cin >> F;
	
	C = (F - 32) * 0.5556;

	cout << "F is: " << F << " & C is: " << C << endl;


	return 0;
}