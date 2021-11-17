#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

int main()
{
	int playerWins = 0;
	int computerWins = 0;
	string playerChoice, computerChoice;
	vector<string> valids;

	valids.push_back("Rock");
	valids.push_back("Paper");
	valids.push_back("Scissors");

	while ((playerWins < 3) && (computerWins < 3))
	{
		cout << "Possible choices:" << endl;
		for (string item : valids) cout << item << endl;

		cout << "Input your choice: ";
		getline(cin, playerChoice);

		if ((playerChoice != valids[0]) && (playerChoice != valids[1]) && (playerChoice != valids[2]))
		{
			cout << "Not a valid choice." << endl;
		}
		else
		{
			srand(unsigned int (time(nullptr)));
			computerChoice = valids[int(rand() % 2)];

			cout << "Computer chose: " << computerChoice << endl;

			//conditions
			if (playerChoice == computerChoice)
			{
				cout << "It was a tie!  No score given" << endl;
			}
			else
			{
				if (playerChoice == "Rock")
				{
					if (computerChoice == "Paper")
					{
						cout << "Computer beats the player!  Computer scores 1 point." << endl;
						cout << "Computer now has " << ++computerWins << " wins" << endl;
					}
					else //scissors
					{
						cout << "Player beats the computer!  Player scores 1 point." << endl;
						cout << "Player now has " << ++playerWins << " wins" << endl;
					}
				}
				if (playerChoice == "Paper")
				{
					if (computerChoice == "Scissors")
					{
						cout << "Computer beats the player!  Computer scores 1 point." << endl;
						cout << "Computer now has " << ++computerWins << " wins" << endl;
					}
					else //scissors
					{
						cout << "Player beats the computer!  Player scores 1 point." << endl;
						cout << "Player now has " << ++playerWins << " wins" << endl;
					}
				}
				if (playerChoice == "Scissors")
				{
					if (computerChoice == "Rock")
					{
						cout << "Computer beats the player!  Computer scores 1 point." << endl;
						cout << "Computer now has " << ++computerWins << " wins" << endl;
					}
					else //scissors
					{
						cout << "Player beats the computer!  Player scores 1 point." << endl;
						cout << "Player now has " << ++playerWins << " wins" << endl;
					}
				}
			}
		}
	}

	if (playerWins == 3)
	{
		cout << "You won the match!" << endl;
	}
	else
	{
		cout << "The computer won the match!" << endl;
	}

	return 0;
}