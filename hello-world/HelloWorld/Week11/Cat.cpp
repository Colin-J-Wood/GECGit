#include "Cat.h"

void Cat::Talk()
{
	cout << "I am your cat and I feel: ";

	int mood = GetMood();

	if (mood > 12)
	{
		cout << "mad" << endl;
	}
	else if (mood > 8)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 4)
	{
		cout << "okay" << endl;
	}
	else
	{
		cout << "happy" << endl;
	}

	PassingTime();
}