#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

int main()
{
	int playerWins, computerWins;
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

		if ((playerChoice != valids[0]) && (playerChoice != valids[0]) && (playerChoice != valids[0]))
		{
			cout << "Not a valid choice." << endl;
		}
		else
		{
			srand(time(nullptr));
			computerChoice = valids[rand() % 2];

			//conditions
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