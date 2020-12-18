#include "Animals.h"


//Constructor
Animals::Animals(int initial_age)
{
	itsAge = initial_age;
}


//Destructor
Animals::~Animals()
{

}


//Functions
int Animals::GetAge()
{
	return itsAge;
}
void Animals::SetAge(int age)
{
	itsAge = age;
}