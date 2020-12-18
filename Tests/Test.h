#ifndef _TEST_
#define _TEST_

#pragma once

#include <iostream>

using namespace std;
class Test
{
public:

	Test();
	~Test();

	void sum()
	{
		int total=0;
		for (int i = 0; i < 10; i++)
		{
			total += (i * 2);
			cout << total << endl;
		}
	}


};


class childTest : public Test
{
public:

	void sum()
	{
		int total=0;
		for (int i = 0; i < 10; i++)
		{
			total += (i * 6);
			cout << total << endl;
			
		}
	}
};
#endif // !_TEST_