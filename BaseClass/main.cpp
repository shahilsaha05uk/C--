#include <iostream>
#include "BaseClass.h"
#include "ChildClass.h"
using namespace std;

int main()
{
	// Creating a child class on stack
	ChildClass child;

	// Creating child class on the heap
	ChildClass* pChild = new ChildClass();

	delete pChild;


	return 0;
}