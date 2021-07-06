#include <iostream>
//#include <string>
using namespace std;

//Singleton Class
class SingletonA
{
private:
	SingletonA() {}

public:
	static int a;
	static void HelloWorld()
	{
		cout << "Hello World"<< endl;
	}

	void HelloShahil()
	{
		cout << "Hello Shahil" << endl;
	}

};

void counting(int n)
{
	static int count = 10;
	count = n;
	cout << count << endl;
}

int SingletonA::a = 10;
int main()
{
	SingletonA a;
	int num = 30;
	for (int i = 0; i < 10; i++)
	{
		counting(num);
	}
	SingletonA::HelloWorld();
}

