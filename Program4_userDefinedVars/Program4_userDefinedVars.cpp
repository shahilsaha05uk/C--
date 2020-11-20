#include <iostream>
typedef int cost;
enum CarMake {
	FORD = 1,
	FIAT,
	TESLA,
	VW,
	BMW,
	ASTONMARTIN,
	HONDA,
	NISSAN,
	TOYOTA,
	AUDI,
	JAGUAR,
	DODGE,
};
using namespace std;
int main()
{
	int cost = 13000;
	CarMake Car_id;
	Car_id = HONDA;
	cout <<"The cost of my car is: "<< cost <<" & my car id is: "<<Car_id<< endl;

	return 0;
}
