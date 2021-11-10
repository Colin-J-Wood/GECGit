#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";

	char choice = ' ';

	while ((choice != 'y') && (choice != 'n'))
	{
		cout << "You picked up a staff!  Swap it for the dagger? (y/n)";
		cin >> choice;

		if ((choice != 'y') && (choice != 'n'))
		{
			cout << "Not an option." << endl;
		}
	}

	cout << endl;

	if (choice == 'y')
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			if (inventory[i] == "dagger")
			{
				inventory[i] = "staff";
				cout << "Item swapped." << endl;
			}
		}
	}
	else
	{
		cout << "You left the staff behind." << endl;
	}

	cout << "Your inventory contains:" << endl;

	for (int i = 0; i < MAX_ITEMS; i++)
	{
		cout << inventory[i] << endl;
	}

	return 0;
}