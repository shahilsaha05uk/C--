#include <iostream>

using namespace std;



bool IsLooping(bool loop)
{

	if (loop == true)
	{
		cout << "Playing" << endl;
	}
	else
	{
		cout << "Stopped" << endl;
	}
	return loop;
}

int main()
{

	enum Sound {
		Play=1, Stop
	};

	Sound sound;

	bool started = true;
	bool b= false;


		if (IsLooping(b) == false)
		{
			sound = Play;
		}
		else
		{
			sound = Stop;
		}

		while (started == true)
		{
			if (sound == Stop)
			{
				cout << "Restart playing" << endl;
			}
			else
			{
				cout << "Already playing" << endl;
			}
		}
			

		

		






}