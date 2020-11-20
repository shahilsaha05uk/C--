#include <iostream>
using namespace std;

bool checkEvenOdd(int num);
bool checkEvenOdd(int num)
{
	cout << boolalpha;
	bool b;

	if (num % 2 == 0)
		b = true;
	else
		b = false;
	return b;
}

void outputResults(int OddCount, int OddTotal, int EvenCount, int EvenTotal);
void outputResults(int OddCount, int OddTotal, int EvenCount, int EvenTotal)
{
	int odd_count = OddCount;
	int even_count = EvenCount;
	cout << "Even Count: " << even_count << endl;
	cout << "Even Total: " << EvenTotal << endl;
	cout << "Odd Count: " << odd_count << endl;
	cout << "Odd Total: " << OddTotal << endl;
}

int main()
{
	int num1 = 0;

	int Odd_count = 0;
	int Even_count = 0;

	int Odd_total = 0;
	int Even_total = 0;
	for (int i = 0; i < 10; i++) {
		cout << "\ninput num: ";
		cin >> num1;

		if (checkEvenOdd(num1) == true) {
			Even_total += num1;
			outputResults(Odd_count, Odd_total, Even_count++, Even_total);
		}
		else  if (checkEvenOdd(num1) == false) {
			Odd_total += num1;
			outputResults(Odd_count++, Odd_total, Even_count, Even_total);
		}
	}


	return 0;
}