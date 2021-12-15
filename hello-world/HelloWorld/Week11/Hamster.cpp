#include "Hamster.h"

void Hamster::Talk()
{
	cout << "I am your hamster and I feel: ";

	int mood = GetMood();

	if (mood > 9)
	{
		cout << "mad" << endl;
	}
	else if (mood > 6)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 3)
	{
		cout << "okay" << endl;
	}
	else
	{
		cout << "happy" << endl;
	}

	PassingTime();
}