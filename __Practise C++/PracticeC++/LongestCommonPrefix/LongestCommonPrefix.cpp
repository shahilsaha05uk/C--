#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> strArr = { "flower","flow","flight" };
vector<string> strArr2 = { "dog","racecar","car" };
vector<string> strArr3 = { "ab","a"};

string LongestPrefix(vector<string> strs);



int main()
{
	string testStr = "Flower";

	cout << "Longest Prefix: " << LongestPrefix(strArr) << endl;
	cout << "Longest Prefix: " << LongestPrefix(strArr2) << endl;
	cout << "Longest Prefix: " << LongestPrefix(strArr3) << endl;
}

string LongestPrefix(vector<string> strs)
{
	string prefix = strs[0];

	for (string s : strs)
	{
		if (s == prefix) continue;

		int tmpStrSize = s.size();
		int count = 0;

		for (int i = 0; i < tmpStrSize; i++)
		{
			if (s[i] == prefix[i])
			{
				count++;
				continue;
			}
			break;
		}
		prefix = s.substr(0, count);
	}
	return prefix;
}
