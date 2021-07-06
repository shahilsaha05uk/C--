#pragma once
#include "Commons.h"
#include <ctime>
#include <fstream>


class Heart
{
public:
virtual	void UpdateHeart(PatientDetails p) = 0;

};


class Base : public Heart
{
private:

	string PatientType[3] = { "General", "Heart", "Lungs" };


public:
	Base();
	~Base();

	int NewIDGenerator();
	PatientDetails NewPatient(string pType);
	void Manager();

	void Update();
	void Update(PatientDetails p);
	void UpdateHeart(PatientDetails p);
};

