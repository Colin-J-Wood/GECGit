//#include <iostream>
//#include <string>
//using namespace std;
//
//float height();
//float weight();
//void output_bmi(float weight, float height);
//
//int main()
//{
//	double bmi;
//	const string message = "Welcome to your BMI Calculator.";
//	string name;
//
//	cout << message << endl;
//	cout << "Firstly what is your full name?" << endl;
//	getline(cin, name);
//	cout << "Hi " + name + " lets get started." << endl;
//
//	float weight_total = weight(), height_total = height();
//
//	cout << endl;
//	output_bmi(weight_total, height_total);
//}
//
//float height()
//{
//	float total_inches = 0.0f;
//	int inches = 0, feet = 0;
//
//	while (true)
//	{
//		cout << "\nPlease enter your height in feet:" << endl;
//		cin >> feet;
//		if (feet < 2 || feet > 7)
//		{
//			cout << "\nYou must be between 2 and 7 feet" << endl;
//		}
//		else
//		{
//			cout << "Thank you!" << endl;
//			break;
//		}
//	}
//
//	while (true)
//	{
//		cout << "\nPlease enter the inches:" << endl;
//		cin >> inches;
//
//		if (inches < 0 || inches > 11)
//		{
//			cout << "\nInches must be between 0 and 11" << endl;
//		}
//		else
//		{
//			cout << "Thank you!" << endl;
//			break;
//		}
//
//	}
//
//	total_inches = feet * 12 + inches;
//	cout << "Your total height in inches is: " << total_inches << endl;
//	return total_inches;
//}
//
//float weight()
//{
//	float total_weight = 0.0f;
//	int stone = 0, pounds = 0;
//
//	while (true)
//	{
//		cout << "\nPlease enter your weight in stone:" << endl;
//		cin >> stone;
//		if (stone < 3 || stone > 30)
//		{
//			cout << "\nYou must be between 3 and 30 stone" << endl;
//		}
//		else
//		{
//			cout << "Thank you!" << endl;
//			break;
//		}
//	}
//
//	while (true)
//	{
//		cout << "\nPlease enter the pounds:" << endl;
//		cin >> pounds;
//
//		if (pounds < 0 || pounds > 13)
//		{
//			cout << "\nPounds must be between 0 and 13" << endl;
//		}
//		else
//		{
//			cout << "Thank you!" << endl;
//			break;
//		}
//
//	}
//
//	total_weight = stone * 13 + pounds;
//	cout << "\nYour total weight in pounds is: " << total_weight;
//	return total_weight;
//}
//
//void output_bmi(float weight, float height)
//{
//	float bmi = (weight / (height * height)) * 703;
//	cout << "Your BMI is: " << bmi << endl;
//}