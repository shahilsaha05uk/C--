#include <iostream>
#include <stack>
#include <string>
using namespace std;



bool isOpenParenthesis(char c);
bool isValid(string s);

int main()
{
    string str1 = "()";
    string str2 = "(]";
    string str3 = "()[]{}";
    string str4 = "{[])";
    string str5 = "{[]}";
    string str6 = "((";
    string str7 = "){";

    cout << str1 << ": \t" << isValid(str1) << endl;
    cout << str2 << ": \t" << isValid(str2) << endl;
    cout << str3 << ": \t" << isValid(str3) << endl;
    cout << str4 << ": \t" << isValid(str4) << endl;
    cout << str5 << ": \t" << isValid(str5) << endl;
    cout << str6 << ": \t" << isValid(str6) << endl;
    cout << str7 << ": \t" << isValid(str7) << endl;
}

bool isValid(string s)
{
    if (s.size() % 2 == 1) return false;

    stack<char>* openParStack = new stack<char>();

    for (char c: s)
    {
        if (isOpenParenthesis(c))
        {
            openParStack->push(c);

            continue;
        }

        if (openParStack->empty()) return false;

        if (openParStack->top() == '{' && c == '}' || 
            openParStack->top() == '[' && c == ']' || 
            openParStack->top() == '(' && c == ')') openParStack->pop();
        else return false;
    }

    return openParStack->empty();
}

bool isOpenParenthesis(char c)
{
    if (c == '{' ||
        c == '[' ||
        c == '(') return true;

    return false;
}
