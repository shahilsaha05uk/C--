#include <iostream>
#include <string>
using namespace std;

void comma2blank(char* textToChange);
void comma2blank(char* textToChange)
{
	for (int i = 0; i < strlen(textToChange); i++)
	{
		if (textToChange[i] == ',')
		{
			textToChange[i] = ' ';	
		}
	}
	cout << textToChange << endl;
}

int main()
{

	char line[1000]{};
	char* line_ptr{nullptr};

	cout << "Enter a sentence: " << endl;
	cin.get(line,1000);

	line_ptr = line;
	comma2blank((line_ptr));
	return 0;
}