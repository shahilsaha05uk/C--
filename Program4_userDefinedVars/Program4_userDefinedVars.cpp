#include <iostream>
typedef int cost;
enum Car {
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
	typedef int COST;
	COST cost = 13000;
	Car Car_id;
	Car_id = HONDA;


	cout <<"The cost of my car is: "<< cost <<" & my car id is: "<<Car_id<< endl;

	return 0;
}
