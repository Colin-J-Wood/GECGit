//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	string sentence = "Do you know who loves C++ XX does!";
//	string earlyName, lateName;
//
//	cout << "Enter your name: ";
//	getline(cin, earlyName);
//
//	sentence.insert(sentence.find("XX") + 1, earlyName, 0, earlyName.length());
//
//	cout << sentence << endl;
//
//	auto noXEnd = remove(sentence.begin(), sentence.end(), 'X');
//	sentence.erase(noXEnd, sentence.end());
//
//	cout << sentence << endl;
//
//	cout << "Input another name: ";
//	getline(cin, lateName);
//
//	sentence.replace(sentence.find(earlyName), earlyName.length(), lateName);
//
//	cout << sentence << endl;
//
//	return 0;
//}