//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int num;
//	char check = 'y';
//
//	do
//	{
//		cout << "Input a number between 1 and 10" << endl;
//		cin >> num;
//
//		if ((num >= 1) && (num <= 10))
//		{
//			for (int row = 0; row < num; row++)
//			{
//				//print out one star at a time so we can do this dynamically.
//				//print out as many stars as there are rows, cascading.
//				for (int star = 0; star < row + 1; star++)
//				{
//					cout << "* ";
//				}
//
//				cout << endl;
//			}
//
//			bool queryContinue = false; //speed up this check
//			do
//			{
//				cout << "Would you like to have another go? (y/n)" << endl;
//				cin >> check;
//
//				if ((check == 'Y') || (check == 'N'))
//				{
//					cout << "Caps detected." << endl;
//				}
//				else if ((check != 'y') && (check != 'n'))
//				{
//					cout << "Invalid response." << endl;
//				}
//				else
//				{
//					queryContinue = true;
//				}
//
//			} while (queryContinue == false);
//		}
//		else
//		{
//			cout << "That number's out of range." << endl;
//
//			//we can let the loop check its condition here, as we haven't changed check at all
//			//so it should always end up succeeding and causing a loop back up to inputting a number.
//		}
//	} while (check == 'y');
//
//	return 0;
//}