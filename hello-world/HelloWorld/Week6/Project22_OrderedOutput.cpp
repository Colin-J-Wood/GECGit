#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int numbers[5];

	cout << "Input five numbers!" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Input number: " << i + 1 << endl;
		cin >> numbers[i];
	}

	sort(numbers, numbers + 5);

	cout << "The numbers in order from least to greatest:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " " << numbers[i];
	}
	cout << endl;

	sort(numbers, numbers + 5, greater<int>());

	cout << "The numbers backwards (from greatest to least):" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << " " << numbers[i];
	}
	cout << endl;

	return 0;
}