//#include <iostream>
//
//using namespace std;
//
//void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
//bool testForOdd(int num);
//
//int main()
//{
//	int inputNum;
//	int oddCount = 0, oddAdded = 0;
//	int evenCount = 0, evenAdded = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Input new number: ";
//		cin >> inputNum;
//
//		if (testForOdd(inputNum) == true)
//		{
//			oddCount++;
//			oddAdded += inputNum;
//		}
//		else
//		{
//			evenCount++;
//			evenAdded += inputNum;
//		}
//	}
//
//	outputResults(oddCount, oddAdded, evenCount, evenAdded);
//
//	return 0;
//}
//
//bool testForOdd(int num)
//{
//	//only will be a remainder if the number is odd.
//	if (num % 2 == 1)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
//{
//	cout << "Amount of odds: " << numOfOdd << endl;
//	cout << "Total of odds: " << oddTotal << endl;
//	cout << "Amount of evens: " << numOfEven << endl;
//	cout << "Total of evens: " << evenTotal << endl;
//}