//#include <iostream>
//
//using namespace std;
//
//int smallestNumber(int a, int b);
//
//int main()
//{
//	int inputA, inputB;
//	int loopCount = 0;
//
//	while (loopCount < 3)
//	{
//		cout << "LOOP " << loopCount + 1 << endl;
//
//		cout << "Input first number: ";
//		cin >> inputA;
//		cout << "Input second number: ";
//		cin >> inputB;
//
//		cout << "RESULT: " << smallestNumber(inputA, inputB) << endl;
//
//		loopCount++;
//	}
//
//	cout << "All finished!" << endl;
//
//	return 0;
//}
//
//int smallestNumber(int a, int b)
//{
//	if (a < b)
//	{
//		return a;
//	}
//	else
//	{
//		//this also fires if the numbers are equal, which is okay since they both are "smallest" in that case.
//		return b;
//	}
//}