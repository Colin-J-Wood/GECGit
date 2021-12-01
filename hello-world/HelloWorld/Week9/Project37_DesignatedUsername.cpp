#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void makeNewName(string& ref_name);

int main()
{
	string name;

	cout << "Please enter a new name: " << endl;
	getline(cin, name);

	cout << "That name is taken." << endl;
	makeNewName(name);
	cout << "Here's a modified version of that name:" << endl;
	cout << name;

	return 0;
}

void makeNewName(string& ref_name)
{
	srand(time(NULL));
	int num = rand();

	ref_name = ref_name + to_string(num);
}