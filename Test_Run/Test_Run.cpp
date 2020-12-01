//#include <iostream>
//#include <string>
//#include <time.h>
//#include<fstream>
//
//
//using namespace std;
//
//
//struct details
//{
//	string name;
//	int account_number;
//	double balance;
//
//};
//
//
//
//int main()
//{
//	details* _instance1;
//	details* _instance2;
//
//	bool a= false;
//	bool b= false;
//
//	int user_choice;
//	char enter_YesNo;
//
//	ofstream outFile("Program38_Out.txt");
//	ifstream inFile("Program38_In.txt");
//
//	int i = 0;
//	while (a !=true)
//	{
//		cout << "1. enter new details" << endl;
//		cout << "2. Display the content of the file" << endl;
//		cout << "3. Display accounts that have balance over 10,000" << endl;
//		cout << "4. Exit the program" << endl;
//
//		cin >> user_choice;
//
//		switch (user_choice)
//		{
//		case 1:
//			fstream Program38("Program38", ios::out | ios::app);
//			while (Program38.is_open())
//			{
//				cout<<"Enter name: ";
//				getline(cin, _instance1->name);
//				cout << "Enter account_number: ";
//				cin>>_instance1->account_number;
//				cout << "Enter balance: ";
//				cin >> _instance1->balance;
//
//				outFile <<"Name: "<< _instance1->name << endl;
//				outFile << "Account Number: " << _instance1->account_number << endl;
//				outFile << "Balance: " << _instance1->balance << endl;
//
//				cout << "Do you want to enter more details? ";
//				cin >> enter_YesNo;
//				if (enter_YesNo == 'N' || enter_YesNo == 'n')
//				{
//					outFile.close();
//				}
//			}
//		case 2:
//
//			if (enter_YesNo == 'n' || enter_YesNo == 'N')
//			{
//				a = false;
//			}
//
//			outFile.open("Program38_Out.txt");
//			if (Program38.is_open())
//			{
//				while (a==true)
//				{
//
//				}
//			}
//
//
//		}
//	}
//
//
//
//	
//
//	return 0;
//}
