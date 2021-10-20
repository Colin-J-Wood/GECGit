#include <iostream>
using namespace std;

int main()
{
	//valids;
	int rain = 1;
	int snow = 2;
	//user inputs;
	int weather;
	int temp;

	//get weather.
	cout << "Please tell me if it's raining with '1' or snowing with '2'." << endl;
	cin >> weather;

	//get temperature.
	cout << "Please tell the temperature in whole number Celsius." << endl;
	cin >> temp;

	//output result.
	if (weather == 1)
	{
		if (temp > 15)
		{
			cout << "Wear a light raincoat." << endl;
		}
		else
		{
			cout << "Wear a thick coat." << endl;
		}
	}
	else if (weather == 2)
	{
		if (temp > 5)
		{
			cout << "Wear something warm." << endl;
		}
		else if (temp > 0)
		{
			cout << "Wrap up well." << endl;
		}
		else
		{
			cout << "Please stay home." << endl;
		}
	}
	else
	{
		//I was not instructed to write any handling for temperatures in the event of clear weather.
		cout << "It's neither raining nor snowing.  Have a nice day!" << endl;
	}

	return 0;
}