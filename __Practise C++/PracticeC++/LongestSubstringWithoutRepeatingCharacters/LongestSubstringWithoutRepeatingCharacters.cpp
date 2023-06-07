#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

//Example 1:
//
//Input: s = "abcabcbb"
//Output : 3
//Explanation : The answer is "abc", with the length of 3.
//Example 2 :
//
//    Input : s = "bbbbb"
//    Output : 1
//    Explanation : The answer is "b", with the length of 1.
//    Example 3 :
//
//    Input : s = "pwwkew"
//    Output : 3
//    Explanation : The answer is "wke", with the length of 3.
//    Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.


int lengthOfLongestSubstring(string s) {

    set<char> sChar;

    int highest = 0;
    int count = 0;

    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (sChar.find(s[i]) != sChar.end())
        {
            sChar.clear();
            count = 0;

            j++;
            i = j - 1;
        }
        else
        {
            sChar.insert(s[i]);
            count++;
        }
        
        highest = (count > highest) ? count : highest;
    }
    return highest;
}
int lengthOfLongestSubstring2(string s) 
{
    int highest = 0, i = 0, j = 0, strSize = s.length();
    set<char> cSet;

    for (i = 0, j = 0; i < strSize; i++)
    {
        char c = s[i];

        if (cSet.find(c) != cSet.end())
        {
            //if found
            while (cSet.find(s[i]) != cSet.end())
            {
                cSet.erase(s[j]);
                j++;
            }
        }

        cSet.insert(c);
        highest = max(highest, i - j + 1);
    }

    return highest;
}

int main()
{
    string str1 = "abcabcbb";
    string str2 = "bbbbb";
    string str3 = "pwwkew";
    string str4 = "aab";
    string str5 = "dvdf";

    cout << "Length of string 1: " << lengthOfLongestSubstring2(str1) << endl;
    cout << "Length of string 2: " << lengthOfLongestSubstring2(str2) << endl;
    cout << "Length of string 3: " << lengthOfLongestSubstring2(str3) << endl;
    cout << "Length of string 4: " << lengthOfLongestSubstring2(str4) << endl;
    cout << "Length of string 5: " << lengthOfLongestSubstring2(str5) << endl;
}
