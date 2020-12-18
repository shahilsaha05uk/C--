#ifndef MAMMALS_H
#define MAMMALS_H
#pragma once

#include<iostream>
using namespace std;

class Mammals
{
private:

public:

	Mammals() : itsAge(1) {}
	~Mammals() {}

protected:
	int itsAge;
};


#endif // !MAMMALS_H