#include <iostream>
using namespace std;

int main()
{
	//our known values.
	int packets = 40;
	int students = 14;

	//divide the packets to see how many each get.
	int packetsPerStudent = packets / students;
	//then modulus this to see how many the stash will have remaining.
	int myStash = packets % students;

	//display the result.
	cout << "Packets per student: " << packetsPerStudent << endl;
	cout << "Packets remaining in my stash: " << myStash << endl;

	return 0;
}