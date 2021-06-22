#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class DrawShape
{
public:
	virtual string shape()

};

class Base
{
private:


public:
	string line = "Base Class";
	int b1;
	float b2;
	virtual string greet();
};

class Derived1 : public Base
{
private:


public:
	int d1;
	float d2;

	string line = "Hi I am Derived 1";
	string greet()
	{
		return line;
	}
};
class Derived2 : public Base
{
private:


public:
	int d1;
	float d2;
	string line = "Hi I am Derived 2";

	string greet()
	{

		return line;
	}
};

int main()
{
	Derived2* d2 = new Derived2();
	cout << d2->greet() << endl;


	return 0;
}

string Base::greet()
{
	return line;
}
