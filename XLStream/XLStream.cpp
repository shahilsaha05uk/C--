#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#include<stdio.h>
#include<string.h>
#include<cstring>
#include<ctype.h>
#include <iostream>
using namespace std;

void OccurenceCount(const char s1, int size);
void reverseDNA(char s1[], int size);

void reverseDNA(char s1[], int size)
{
	for (int i = 0; i < size; i++)
	{
		s1[i] = s1[i]++;
	}
	cout << _strupr(s1) << endl;
}

void OccurenceCount(const char s1, int size)
{
	const char* findingString = &s1;
	const char* resultString;

	resultString = strchr(findingString, 'I');

	int count = 0;
	while ((findingString = strchr(findingString, 'A')) != NULL)
	{
		//Print statements
		findingString++;
		count++;
	}
	//Print statements
	cout << "Occurence count: " << count << endl;
}

int main()
{

	for (int i = 0; i < 2; i++)
	{
		char Sequence[] = "HelloAWorld";// do the input
		int size = strlen(Sequence);
		OccurenceCount(*Sequence, size);
		reverseDNA(Sequence, size);
	}
}







//#include<stdio.h>
//#include <iostream>
//using namespace std;
//struct proteinDetails
//{
//	int proteinID;
//	float acidContent;
//	char proteinDescription[200];
//
//};
//void protein1(proteinDetails p1)
//{
//	cout << p1.proteinID << endl;
//	cout << p1.acidContent << endl;
//
//	for (int i = 0; i < strlen(p1.proteinDescription); i++)
//	{
//		cout << p1.proteinDescription[i];
//	}
//	cout << endl;
//}
//void protein2(proteinDetails p2)
//{
//	cout << p2.proteinID << endl;
//	cout << p2.acidContent << endl;
//
//	for (int i = 0; i < strlen(p2.proteinDescription); i++)
//	{
//		cout << p2.proteinDescription[i];
//	}
//	cout << endl;
//}
//int main()
//{
//	proteinDetails protein[2];
//
//	for (int i = 0; i < 2; i++)
//	{
//		if (i == 0)
//		{
//			protein[i].proteinID = 10;
//			protein[i].acidContent = 20.5;
//			strcpy_s(protein[i].proteinDescription, "Hello world");
//			protein1(protein[i]);
//		}
//		if(i==1)
//		{
//			protein[i].proteinID = 10;
//			protein[i].acidContent = 20.5;
//			strcpy_s(protein[i].proteinDescription, "Hello world from p2");
//			protein2(protein[i]);
//		}
//	}
//
//}
//#include<stdio.h>
//#include <cstring>
//struct proteinDetails
//{
//	int protein_id;
//	float acidContent;
//	char proteinDescription[200];
//
//};
//void protein1(proteinDetails p1)
//{
//	printf("p1.protein_id: %d", p1.protein_id);
//	printf("p1.acidContent: %f", p1.acidContent);
//
//	printf("p1.proteinDescription: %s", p1.proteinDescription);
//
//	printf("\n\n");
//}
//void protein2(proteinDetails p2)
//{
//	printf("p2.protein_id: %d", p2.protein_id);
//	printf("p2.acidContent: %f", p2.acidContent);
//
//	printf("p2.proteinDescription: %s", p2.proteinDescription);
//
//	printf("\n\n");
//}
//int main()
//{
//	proteinDetails protein[2];
//	char tempString[1000] = {""};
//	for (int i = 0; i < 2; i++)
//	{
//		if (i == 0)
//		{
//			printf("enter proteinID: \n");
//			scanf_s("%d", &protein[i].protein_id);
//			printf("enter acidcontent:\n");
//			scanf_s("%f", &protein[i].acidContent);
//			printf("enter Description:\n");
//			scanf("%s", &tempString);
//			strcpy_s(protein[i].proteinDescription, tempString);
//			protein1(protein[i]);
//		}
//		if (i == 1)
//		{
//			printf("enter proteinID: \n");
//			scanf_s("%d", &protein[i].protein_id);
//			printf("enter acidcontent:\n");
//			scanf_s("%f", &protein[i].acidContent);
//			printf("enter Description:\n");
//			scanf("%s", tempString);
//			strcpy_s(protein[i].proteinDescription, tempString);
//			protein2(protein[i]);
//		}
//	}
//}