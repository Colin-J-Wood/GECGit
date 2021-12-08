#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <filesystem>

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
			//input mode is true, ask for a new high score, write it, and print the new score table.
			handleScore(fileName_global, true);

			break;
		case 2:
			//input mode is false, just load and print the scores.
			handleScore(fileName_global, false);

			break;
		case 3:
			cont = false;

			break;
		default:
			cout << "Not a choice." << endl;

			break;
		}

		cin.clear();
	}

	cout << "Goodbye!" << endl;

	return 0;
}

bool compareScore(score i1, score i2)
{
	return (i1.scoreValue > i2.scoreValue);
}


void handleScore(string fileName, bool inputMode)
{
	fstream file;
	file.open(fileName, fstream::in | fstream::out | fstream::app);

	vector<score> scoreList;
	score nextScore;
	string textToCopy;
	int index = 0;

	if (!file.is_open())
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

		file.close();
		file.open(fileName, fstream::in | fstream::out | fstream::trunc);

		scoreList.push_back(nextScore);
		sort(scoreList.begin(), scoreList.end(), compareScore);

		scoreList.pop_back();

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
		cout << " | " << i.scoreValue << endl;
		setw(0);
	}

	file.close();
}