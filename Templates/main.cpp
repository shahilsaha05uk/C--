#include "TempClass.h"
#include <iomanip>
#include <cstring>
#include <vector>
using namespace std;


//Function
template <class myType>
myType adding(myType a, myType b)
{
	return a + b;
}

//class
template<class T>
class Calculator
{
private:

public:
	void add(T v1, T v2)
	{
		cout << "Result: " << v1 + v2 << endl;
	}

	Calculator(T val1, T val2)
	{
		add(val1, val2);
	}



};

int main()
{
	cout << "Adding: " << adding(5, 5) << endl;
	Calculator<float>* c = new Calculator<float>(2.0f,10.5f);
	Calculator<float> d(10,20);


	return 0;
}