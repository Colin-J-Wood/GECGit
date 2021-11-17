//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void print_inventory(vector<string> inventory);
//string get_choice(vector<string> valids);
//
//int main()
//{
//	vector<string> inventory;
//	vector<string> valids;
//	int index = 0;
//
//	for (int i = 0; i < 3; i++)
//	{
//		valids.clear();
//
//		switch (i)
//		{
//			case 0:
//				valids.push_back("Sword");
//				valids.push_back("Shield");
//				break;
//			case 1:
//				
//				valids.push_back("Staff");
//				valids.push_back("Knife");
//				break;
//			case 2:
//				valids.push_back("Healing Potion");
//				valids.push_back("Fire Spell");
//				break;
//		}
//
//		inventory.push_back(get_choice(valids));
//		print_inventory(inventory);
//	}
//
//	cout << endl;
//	cout << "Your inventory is full!" << endl;
//	cout << endl;
//
//	while (index == 0)
//	{
//		cout << "You have found a magic ring what would you like to replace in your inventory?" << endl;
//		cout << "Choices:" << endl;
//		for (string item : inventory) cout << i + 1 << ": " << item << endl;
//		cout << endl;
//
//		cin >> index;
//		cout << endl;
//
//		if ((index < 1) || (index > 3))
//		{
//			cout << "Not a valid choice." << endl;
//			index = 0;
//		}
//	}
//
//	inventory[index] = "Magic Ring";
//	print_inventory(inventory);
//	
//	cout << "You have been robbed!!" << endl;
//	inventory.clear();
//	print_inventory(inventory);
//
//	return 0;
//}
//
//void print_inventory(vector<string> inventory)
//{
//	cout << "Inventory is now:" << endl;
//
//	if (inventory.empty())
//	{
//		cout << "Empty!" << endl;
//	}
//	else
//	{
//		for (string item : inventory)
//		{
//			cout << item << endl;
//		}
//	}
//
//	cout << endl;
//}
//
//string get_choice(vector<string> valids)
//{
//	string choice = "";
//
//	while (true)
//	{
//		cout << "Type which item you wish to keep: " << valids[0] << " or " << valids[1] << endl;
//		getline(cin, choice);
//
//		if ((choice == valids[0]) || (choice == valids[1]))
//		{
//			break;
//		}
//
//		cout << "Not a valid choice, did you make a typo?" << endl;
//	}
//
//	return choice;
//}