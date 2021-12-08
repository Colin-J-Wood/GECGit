#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void inputScore(string fileName);
void outputScore(string fileName);

string fileName_global = "scores.txt";

struct score
{
	string name;
	int score;
};

int main()
{
	bool cont = true;

	while (cont)
	{
		int choice = 0;

		cout << "Input a choice:" << endl;
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1:
				inputScore(fileName_global);

				break;
			case 2:
				outputScore(fileName_global);

				break;
			case 3:
				cont = false;

				break;
			default:
				cout << "Not a choice." << endl;

				break;
		}
	}

	return 0;
}

void inputScore(string fileName)
{

}

void outputScore(string fileName)
{

}