//#include <iostream>
//
//using namespace std;
//
//void inputDetails(int* n1, int* n2);
//void outputDetails(int& integer1, int& integer2, int* pointer);
//
//int main()
//{
//	int num1, num2;
//	int* pnum = &num1;
//
//	inputDetails(&num1, &num2);
//
//	outputDetails(num1, num2, pnum);
//
//	cout << "Changing which number pNum is pointed to..." << endl;
//	pnum = &num2;
//
//	outputDetails(num1, num2, pnum);
//
//	return 0;
//}
//
//void inputDetails(int* n1, int* n2)
//{
//	cout << "Input two numbers." << endl;
//
//	cin >> *n1;
//	cin >> *n2;
//}
//
//void outputDetails(int& integer1, int& integer2, int* pointer)
//{
//	cout << "Num 1 value: " << integer1 << endl;
//	cout << "Num 1 address: " << &integer1 << endl;
//	cout << "Num 2 value: " << integer2 << endl;
//	cout << "Num 2 address: " << &integer2 << endl;
//	cout << "pNum value (is holding an address): " << pointer << endl;
//	cout << "pNum dereferenced value: " << *pointer << endl;
//	cout << "pNum address in memory: " << &pointer << endl;
//}