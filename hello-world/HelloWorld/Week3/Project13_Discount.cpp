//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char status;
//	int gameChoice;
//
//	//ask for status and game choice
//	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << endl;
//	cin >> status;
//
//	cout << "Which game would you like, 1 or 2?" << endl;
//	cin >> gameChoice;
//
//	//output discount 
//	if ((status == 's') || (status == 't') && (gameChoice == 1))
//	{
//		cout << "You can get a 20% discount." << endl;
//	}
//	else if ((status == 's') || (status == 't') && (gameChoice == 2))
//	{
//		cout << "You can get a 10% discount." << endl;
//	}
//	else
//	{
//		cout << "You are not entitled to a discount." << endl;
//	}
//	
//	return 0;
//}