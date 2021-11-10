#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

char faces[10] = { 'A', 'A', 'B', 'B', 'C', 'C', 'D', 'D', 'E', 'E' };
bool cards[10];
int inputs[2] = { -1, -1 }; //means "no input" as zero can be a valid index too.
int score = 0;
int whichInput = 0;

void print_table();
void get_input();
void shuffle_cards();
void test_match();

int main()
{	
	shuffle_cards();
	print_table();

	while (score < 5) //win condition, there are five pairs to find.
	{
		while (whichInput < 2)
		{
			get_input();

			print_table();
		}

		test_match();
		print_table();
		
		//reset inputs.
		inputs[0] = -1;
		inputs[1] = -1;
		whichInput = 0;
	}
	
	cout << "All pairs found, you win!" << endl;

	return 0;
}

void print_table()
{
	for (int i = 0; i < 10; i++)
	{
		if (cards[i] == false)
		{
			//this card has not been successfully turned up before.
			cout << " " << i + 1;
		}
		else
		{
			cout << " " << faces[i];
		}

		//space the table evenly.
		if (i == 4)
		{
			cout << endl;
		}
	}

	cout << endl;
}

void get_input()
{
	//negative one means no input.
	while (inputs[whichInput] == -1)
	{
		cout << "Input 1 through 10." << endl;
		cin >> inputs[whichInput];

		if ((inputs[whichInput] < 1) || (inputs[whichInput] > 10))
		{
			cout << "Not a valid entry." << endl;
			inputs[whichInput] = -1; //reloop input
		}

		//invalidate if card is already turned over.
		if (inputs[whichInput] != -1) //prevents out of range.
		{
			if (cards[inputs[whichInput] - 1] == true)
			{
				cout << "Already turned up." << endl;
				inputs[whichInput] = -1; //reloop input.
			}
		}
	}

	inputs[whichInput]--; //make safe to reference the array with
	if (inputs[whichInput] >= 0) cards[inputs[whichInput]] = true;  //added if statement to stop warning.

	whichInput++;
}

void shuffle_cards()
{
	random_device rd;
	default_random_engine rng(rd());

	shuffle(faces, faces + 10, rng);

	/*for (int i = 0; i < 10; i++)
	{
		cout << faces[i] << endl;
	}*/
}

void test_match()
{
	if (faces[inputs[0]] == faces[inputs[1]])
	{
		cout << "Match found!" << endl;
		score++;
	}
	else
	{
		cout << "No match found..." << endl;
		cards[inputs[0]] = false;
		cards[inputs[1]] = false;
	}
}