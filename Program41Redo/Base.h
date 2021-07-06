#ifndef _BASE_H_
#define _BASE_H_

#endif // !_BASE_H_


#pragma once
#include <iostream>
using namespace std;

enum AccountType
{
	GENERAL = 1,
	SAVINGS,
	JUNIOR
};


class Base
{
private:

public:
	Base();
	~Base();

	void OptionManager();
};

