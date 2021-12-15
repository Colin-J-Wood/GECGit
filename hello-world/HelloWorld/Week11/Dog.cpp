#include "Dog.h"

void Dog::Talk()
{
	cout << "I am your dog and I feel: ";

	int mood = GetMood();

	if (mood > 18)
	{
		cout << "mad" << endl;
	}
	else if (mood > 12)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 6)
	{
		cout << "okay" << endl;
	}
	else
	{
		cout << "happy" << endl;
	}

	PassingTime();
}