//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void print_between_spaces(char stringToRead[]);
//
//int spaceCache = 0;
//
//int main()
//{
//	const int length = 32;
//	char name[length];
//	bool isValid = false;
//
//	cout << "Input your first initial, followed by your middle initial, followed by your full last name." << endl;
//
//	cin.getline(name, length);
//
//	for (int i = 0; i < 3; i++)
//	{
//		print_between_spaces(name);
//	}
//
//	return 0;
//}
//
//void print_between_spaces(char stringToRead[])
//{
//	for (int i = spaceCache; i < strlen(stringToRead); i++)
//	{
//		cout << stringToRead[i];
//
//		if (stringToRead[i] == ' ')
//		{
//			spaceCache = i + 1; //skip the space afterward so next time we enter this function it's not just a space again.
//			break;
//		}
//	}
//
//	cout << endl;
//}