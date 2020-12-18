#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H




class Animals
{
public:

	Animals(int initial_age);
	~Animals();

	int GetAge();
	void SetAge(int age);


private:

	int itsAge;
};

#endif // !ANIMAL.H