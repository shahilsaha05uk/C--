#include <iostream>
#include <string>
#include <vector>
#include<stdio.h>

using namespace std;

//4
//6
//478
//2090
//77777

int main()
{
	vector<int> num = { 4,6,478,2090,77777 };

	for (size_t i = 0; i < num.size(); i++)
	{
		string s = to_string(num[i]);

		for (size_t j = 0; j < s.size(); j++)
		{
			if (s[j] == '7')
			{
				cout << "Its a lucky number: " << num[i]<< endl;
				break;
			}
			else
			{
				continue;
			}
		}
	}
}
