#include <iostream>
#include <string>

using namespace std;

struct PersonDetails
{
	string name, telephoneNumber;
	int age;

	void PrintDetails()
	{
		cout << "Your name is: " << name << endl;
		cout << "Your age is: " << age << endl;
		cout << "Your telephone number is: " << telephoneNumber << endl;
	}

	PersonDetails()
	{
		name = "";
		telephoneNumber = "";
		age = 0;
	}
};

int main()
{
	PersonDetails personDetails;

	string input;
	int num;

	cout << "Enter your name: ";
	getline(cin, input);

	cout << "Enter your age: ";
	cin >> num;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	personDetails.name = input;
	personDetails.age = num;

	cout << "Enter your phone number: ";
	getline(cin, input);

	personDetails.telephoneNumber = input;

	personDetails.PrintDetails();

	return 0;
}