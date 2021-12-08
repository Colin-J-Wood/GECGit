#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void handleScore(string fileName, bool inputMode);

string fileName_global = "scores.txt";

struct score
{
	string name;
	int scoreValue = 0;
};

int main()
{
	//create the file if it hasn't already.
	ofstream newFile("scores.txt");
	newFile.close();

	bool cont = true;

	while (cont)
	{
		int choice = 0;

		setw(0);

		cout << "Input a choice:" << endl;
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1:
				handleScore(fileName_global, true);

				break;
			case 2:
				handleScore(fileName_global, false);

				break;
			case 3:
				cont = false;

				break;
			default:
				cout << "Not a choice." << endl;

				break;
		}
	}

	cout << "Goodbye!" << endl;

	return 0;
}

void handleScore(string fileName, bool inputMode)
{
	fstream file;
	vector<score> scoreList;
	score nextScore;
	string textToCopy;
	int index = 0;

	file.open(fileName, ios::in | ios::out);

	if (!file)
	{
		cout << "Failure opening file." << endl;
		return;
	}

	while (!file.eof())
	{
		index++;
		switch (index)
		{
		case 1:
			getline(file, textToCopy);

			nextScore.name = textToCopy;

			break;
		case 2:
			file >> nextScore.scoreValue;

			scoreList.push_back(nextScore);

			file.ignore();
			index = 0;
			break;
		}
	}

	if (scoreList.size() == 0)
	{
		//make a new file with all ten slots filled
		for (int i = 0; i < 10; i++)
		{
			nextScore.name = "Default";
			nextScore.scoreValue = 10000 - (1000 * i);

			scoreList.push_back(nextScore);
		}

		//having difficulty getting this working too...
		for (score i : scoreList)
		{
			file << i.name << endl;
			file << i.scoreValue << endl;
		}
	}

	//having difficulty getting this one working...
	if (inputMode)
	{
		cout << "Input a name: ";
		cin >> textToCopy;

		nextScore.name = textToCopy;

		cout << "Input a score: ";
		cin >> nextScore.scoreValue;
		cin.ignore();

		file.clear();

		//need to add code here that inserts the score into the vector.

		for (score i : scoreList)
		{
			file << i.name << endl;
			file << i.scoreValue << endl;
		}
	}

	for (score i : scoreList)
	{
		setw(10);
		cout << i.name;
		cout << i.scoreValue << endl;
		setw(0);
	}

	file.close();
}