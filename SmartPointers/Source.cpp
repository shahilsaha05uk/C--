#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Test
{
private:
	int data;

public:

	int hello = 0;
	Test();
	Test(int d);
	~Test();
};

Test::Test()
{
	data = 0;
	cout << "Constructor Data is: " << data << endl;

}
Test::Test(int d)
{
	data = d;
	cout << "Constructor Data is: " << data << endl;
}
Test::~Test()
{
	cout << "Destructor Data is: " << data << endl;

}

struct Vector3
{
	int a, b, c;
};

int main()
{
	//Using Normal Pointers
	Test* t1 = new Test(100);
	t1->~Test();

	//Using Unique Pointers
	std::unique_ptr<Test> t2{ new Test(200) };
	//OR
	std::unique_ptr<Test> t3 = std::make_unique<Test>(300);

	//Now unique pointers cannot be assigned like t3 = t1 but we can change the ownership of the reference to the new pointer using "move" method
	std::unique_ptr<Test> t4;
	t4 = std::move(t2);

	if (!t2)
	{
		cout << "t2 is null" << endl;
	}

	cout << "t4: " << t4 << endl;

	//Shared Pointer
	shared_ptr<Test> s1 = make_shared<Test>(5000);
	//shared_ptr<Test> s2 = make_shared<Test>(5000);
	shared_ptr<Test> s2 = s1;
	cout <<"Pointers being shared for Test: "<< s1.use_count() << endl;

	return 0;
}