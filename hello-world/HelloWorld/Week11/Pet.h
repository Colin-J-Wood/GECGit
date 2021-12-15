#pragma once
#include <iostream>
using namespace std;

class Pet
{
public:
	Pet() : m_hunger(0), m_boredom(0) {}
	~Pet() {}

	virtual void Talk();
	void Feed(int food = 4);
	void Play(int fun = 4);

private:
	int m_hunger = 0;
	int m_boredom = 0;

protected:
	const int GetMood() { return m_hunger + m_boredom; }
	void PassingTime(int time = 1);
};

