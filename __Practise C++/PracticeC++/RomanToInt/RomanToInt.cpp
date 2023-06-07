#include <iostream>
#include <map>
#include <string>

using namespace std;


map<char, int> romanList =
{
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};


int RomanToInt(string romanStr)
{
    int num = 0;
    int strSize = romanStr.size() - 1;


    for (int i = strSize; i >= 0; i--)
    {
        if (romanList[romanStr[i]] < romanList[romanStr[i + 1]])
        {
            num -= romanList[romanStr[i]];

            continue;
        }

        num += romanList[romanStr[i]];
    }

    return num;
}



int main()
{
    cout << "MCMXCIV should be: " << RomanToInt("MCMXCIV") << endl;
}
