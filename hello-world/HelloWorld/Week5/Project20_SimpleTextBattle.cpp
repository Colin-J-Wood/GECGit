#include <iostream>	

using namespace std;

void attackChoice(int choice);
bool playState();

int playerHealth = 1000;
int enemyHealth = 2000;

bool isPlaying = true;

int main()
{
	int playerChoice;

	while (isPlaying)
	{
		cout << "You are encountering a troll!  You have three attack options" << endl;
		cout << "1. Use sword." << endl;
		cout << "2. Use magic." << endl;
		cout << "3. Use axe." << endl;
		cout << "Each choice will have a different effect." << endl;

		cin >> playerChoice;

		if ((playerChoice > 3) || (playerChoice < 1))
		{
			cout << "Not a choice!" << endl;
		}
		else
		{
			attackChoice(playerChoice);
			//improved: will now return true instead of false if neither entity has died.  this allows the while loop to continue.
			isPlaying = playState();
		}
	}

	return 0;
}

void attackChoice(int choice)
{
	const int sword_damage = 300, magic_damage = 650, axe_damage = 450;
	const int troll_sword = 350, troll_magic = 50, troll_axe = 100;

	switch (choice)
	{
		case 1:
			enemyHealth -= sword_damage;
			playerHealth -= troll_sword;

			cout << "You hit the troll with your sword." << endl;
			cout << "The troll struck back with his own sword!" << endl;

			if (playerHealth < 0) playerHealth = 0;
			if (enemyHealth < 0) enemyHealth = 0;

			cout << "You have " << playerHealth << " health." << endl;
			cout << "The troll has " << enemyHealth << " health." << endl;

			break;
		case 2:
			enemyHealth -= magic_damage;
			playerHealth -= troll_magic;

			cout << "You hit the troll with your magic." << endl;
			cout << "The troll struck back with his own magic!" << endl;

			if (playerHealth < 0) playerHealth = 0;
			if (enemyHealth < 0) enemyHealth = 0;

			cout << "You have " << playerHealth << " health." << endl;
			cout << "The troll has " << enemyHealth << " health." << endl;

			break;
		case 3:
			enemyHealth -= axe_damage;
			playerHealth -= troll_axe;

			cout << "You hit the troll with your axe." << endl;
			cout << "The troll struck back with his own axe!" << endl;

			if (playerHealth < 0) playerHealth = 0;
			if (enemyHealth < 0) enemyHealth = 0;

			cout << "You have " << playerHealth << " health." << endl;
			cout << "The troll has " << enemyHealth << " health." << endl;

			break;
		default:
			cout << "Impossible!  Needs debugging" << endl;
			break;
	}
}

bool playState()
{
	char playAgain = 'e';

	if (enemyHealth <= 0)
	{
		cout << "You killed the troll and won!" << endl;
		
		while ((playAgain != 'y') && (playAgain != 'n'))
		{
			cout << "Play again? (y/n): ";
			cin >> playAgain;

			if ((playAgain != 'y') && (playAgain != 'n'))
			{
				cout << "Not an option!" << endl;
			}
		}

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;

			return true;
		}
		else
		{
			return false;
		}
	}

	if (playerHealth <= 0)
	{
		cout << "You were killed and lost!" << endl;

		while ((playAgain != 'y') && (playAgain != 'n'))
		{
			cout << "Play again? (y/n): ";
			cin >> playAgain;

			if ((playAgain != 'y') && (playAgain != 'n'))
			{
				cout << "Not an option!" << endl;
			}
		}

		if (playAgain == 'y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;

			return true;
		}
		else
		{
			return false;
		}
	}

	//changed from false to true.
	return true;
}