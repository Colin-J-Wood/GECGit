//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int playerLife = 100;
//	int count = 0;
//
//	while (count < 10)
//	{
//		cout << "Current player health is: " << playerLife << endl;
//
//		cout << "Question: " << count + 1 << ": How much damage should I deal?" << endl;
//		int damage;
//		cin >> damage;
//
//		//end early if player health is 0.
//		playerLife -= damage;
//
//		if (playerLife <= 0) count = 10;
//		count++; //don't have to care if this ends up as 11.
//	}
//
//	//show result now, instead of inside the loop.
//	if (playerLife <= 0)
//	{
//		cout << "Early end!  The player is dead." << endl;
//	}
//	else
//	{
//		cout << "All questions asked.  Player survived!" << endl;
//	}
//
//	return 0;
//}