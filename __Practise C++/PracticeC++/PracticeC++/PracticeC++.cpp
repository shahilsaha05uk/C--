#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <chrono>


using namespace std;
using namespace std::chrono;
//Example 1:
//
//Input: pattern = "abba", s = "dog cat cat dog"
//Output : true
//Example 2 :
//
//	Input : pattern = "abba", s = "dog cat cat fish"
//	Output : false
//	Example 3 :
//
//	Input : pattern = "aaaa", s = "dog cat cat dog"
//	Output : false

map<char, string> m;

vector<string> getWords(string str);

vector<string> getWords(string str)
{
	str += " ";
	vector<string> words;

	string w;
	for (auto it = str.begin(); it != str.end(); ++it)
	{
		w += *it;
		if (*it == ' ')
		{
			words.push_back(w);
			w.clear();
		}
	}

	return words;
}

bool wordPattern(string pattern, string s)
{
	vector<string> words = getWords(s);
	set<string> sWords;

	if (pattern.size() != words.size()) return false;


	for (int i= 0; i< pattern.size(); i++)
	{
		if ((m.empty() || m.find(pattern[i]) == m.end()))
		{
			if (sWords.count(words[i]) > 0)
			{
				return false;
			}
			m.emplace(pair<char, string>(pattern[i], words[i]));
			sWords.insert(words[i]);
			continue;
		}

		if (m.find(pattern[i]) != m.end() && m[pattern[i]] == words[i])
		{
			continue;
		}
		else
		{
			return false;
		}
	}

	return true;
}

void printPattern(string str, bool b)
{
	cout << "Str: " << str << ", bool: " << b << endl;
}

int main()
{
	auto start = high_resolution_clock::now();

	string pattern1 = "abba";
	string pattern2 = "aaaa";

	string str1 = "dog cat cat dog";
	string str2 = "dog cat cat fish";
	string str3 = "dog cat cat dog";
	string str4 = "dog dog dog dog";

	//printPattern(str1, wordPattern(pattern1, str1));
	//printPattern(str2, wordPattern(pattern1, str2));
	printPattern(str4, wordPattern(pattern1, str4));


	//time function
		cout << "\n";
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken by function: " << duration.count() << " microseconds" << "\n";
}