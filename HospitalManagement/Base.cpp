#include "Base.h"


Base::Base()
{
	Manager();
}

Base::~Base()
{

}

int Base::NewIDGenerator()
{
	srand(time(NULL));
	int id = rand() & 10000 + 1;
	return id;
}

PatientDetails Base::NewPatient(string pType)
{
	PatientDetails* _patient = new PatientDetails();

	_patient->ID = NewIDGenerator();
	cout << "Patient ID: " << _patient->ID << endl;
	_patient->PatientType = pType;
	cout << "Patient Category: " << _patient->PatientType << endl;
	cout << "FirstName: ";
	cin >> _patient->firstname;
	cout << "LastName: ";
	cin >> _patient->lastname;
	cout << "Age: ";
	cin >> _patient->age;
	cout << "Gender: ";
	cin >> _patient->gender;	
	cout << "BloodGroup: ";
	cin >> _patient->blood;

	return *_patient;
}

void Base::Manager()
{
	int selection;
	bool b = true;

	while (b)
	{
		cout << "Welcome to the Hospital" << endl;
		cout << "0. General Patient" << endl;
		cout << "1. Heart patient" << endl;
		cout << "2. Lungs Patient" << endl;
		cout << "3. Exit" << endl;

		cout << "Input selection: ";
		cin >> selection;

		switch (selection)
		{
		case GENERAL:		//Static Function
			cout << "General Patient: " << endl;
			cout << "\n1. Enter a new Health Record" << endl;
			cout << "3. Go back" << endl;

			cin >> selection;
			switch (selection)
			{
			case 1:
				PatientDetails p = NewPatient(PatientType[0]);
				ofstream outfile;
				outfile.open("GeneralPatients.txt", ios::app);
				if (outfile.is_open())
				{
					outfile << p.ID << " " << "Lungs" << " " << p.firstname << " " << p.lastname << " " << p.gender << " " << p.age << " " << p.blood << endl;
				}
				outfile.close();
				break;
			}

			break;
		case HEART:			//Abstract Class
			cout << "Heart Patient: " << endl;
			cout << "\n1. Enter a new Health Record" << endl;
			cout << "3. Go back" << endl;

			cin >> selection;
			switch (selection)
			{
			case 1:
				PatientDetails p = NewPatient(PatientType[1]);
				UpdateHeart(p);
				break;
			}
			break;
		case LUNGS:			//Overloading
			cout << "Lungs Patient: " << endl;
			cout << "\n1. Enter a new Health Record" << endl;
			cout << "3. Go back" << endl;

			cin >> selection;
			switch (selection)
			{
			case 1:
				PatientDetails p = NewPatient(PatientType[2]);
				Update(p);
				break;
			}
			break;
		case 4:
			cout << "Case 4" << endl;
			b = false;
			break;
		default:
			cout << "\nIncorrect selection!! Please try again" << endl;
			break;
		}
	}
}

void Base::Update()
{

}

//Overloading
void Base::Update(PatientDetails p)
{
	ofstream outfile;
	outfile.open("LungsPatients.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << p.ID << " " << "Lungs" << " " << p.firstname << " " << p.lastname << " " << p.gender << " " << p.age << " " << p.blood << endl;
	}
	outfile.close();
}

//Abstract
void Base::UpdateHeart(PatientDetails p)
{
	ofstream outfile;
	outfile.open("HeartPatients.txt", ios::app);
	if (outfile.is_open())
	{
		outfile << p.ID << " " << "Heart" << " " << p.firstname << " " << p.lastname << " " << p.gender << " " << p.age << " " << p.blood << endl;
	}
	outfile.close();
}