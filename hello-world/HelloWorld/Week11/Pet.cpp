#include "Pet.h"

void Pet::Feed(int food)
{
	cout << "Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0) m_hunger = 0;

	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "Yay!  This is fun!" << endl;
	m_boredom -= fun;
	if (m_boredom < 0) m_boredom = 0;

	PassingTime();
}

void Pet::Talk()
{
	cout << "I am your pet and I feel: ";

	int mood = GetMood();

	if (mood > 15)
	{
		cout << "mad" << endl;
	}
	else if (mood > 10)
	{
		cout << "frustrated" << endl;
	}
	else if (mood > 5)
	{
		cout << "okay" << endl;
	}
	else
	{
		cout << "happy" << endl;
	}

	PassingTime();
}

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_boredom += time;
}