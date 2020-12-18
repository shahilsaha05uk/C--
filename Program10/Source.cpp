#include<iostream>

using namespace std;

int main()
{
	int hariboPackets = 40;
	int noOfStudents = 14;
	int equalDistribution= hariboPackets / noOfStudents;
	int leftHaribo = hariboPackets % noOfStudents;
	cout << "Each student gets: " << equalDistribution << " packets of haribo" << endl;
	cout << "You are left with " << leftHaribo << " packets of haribo" << endl;

	return 0;
}