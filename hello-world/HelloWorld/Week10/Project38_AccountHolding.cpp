//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void newDetails(string fileName);
//void gatherAndDisplay(string fileName, float minimumBalance, bool minBalanceMode);
//
//string fileName_global = "accounts.txt";
//
//struct account
//{
//    string name;
//    int number = 0;
//    float balance = 0.0f;
//};
//
//int main()
//{
//    bool cont = true;
//    int menuChoice = 0;
//
//    while (cont)
//    {
//        cout << "Input a choice:" << endl;
//        cout << "1. Enter new account details" << endl;
//        cout << "2. Display file contents" << endl;
//        cout << "3. Display accounts with balances over 10,000.00" << endl;
//        cout << "4. Exit" << endl;
//
//        cin >> menuChoice;
//
//        switch (menuChoice)
//        {
//            case 1:
//                newDetails(fileName_global);
//
//                break;
//            case 2:
//                //false; ignore the minimum balance
//                gatherAndDisplay(fileName_global, 0.0f, false);
//
//                break;
//            case 3:
//                //true; must meet minimum balance to be displayed
//                gatherAndDisplay(fileName_global, 10000.0f, true);
//
//                break;
//            case 4:
//                cont = false;
//
//                break;
//            default:
//                cout << "Not a choice." << endl;
//
//                break;
//        }
//    }
//
//    cout << "Goodbye!" << endl;
//
//    return 0;
//}
//
//void newDetails(string fileName)
//{
//    ofstream file(fileName);
//    account inputAccount;
//
//    if (!file.is_open())
//    {
//        cout << "Problem opening file for writing." << endl;
//        return;
//    }
//
//    bool inputting = true;
//
//    while (inputting)
//    {
//        char choice = ' ';
//
//        cin.ignore();
//
//        cout << "Input a new name: " << endl;
//        getline(cin, inputAccount.name);
//
//        cout << "Input a new account number: " << endl;
//        cin >> inputAccount.number;
//
//        cout << "Input a new account balance: " << endl;
//        cin >> inputAccount.balance;
//
//        cout << "Appending to file..." << endl;
//        file << inputAccount.name << endl;
//        file << inputAccount.number << endl;
//        file << inputAccount.balance << endl;
//
//        while (choice == ' ')
//        {
//            cout << "Would you like to continue adding accounts? (y/n)" << endl;
//            cin >> choice;
//
//            if ((choice != 'y') && (choice != 'n'))
//            {
//                cout << "Not a choice." << endl;
//                choice = ' ';
//            }
//        }
//
//        if (choice == 'n') inputting = false;
//    }
//
//    file.close();
//}
//
//void gatherAndDisplay(string fileName, float minimumBalance, bool minBalanceMode)
//{
//    ifstream file(fileName);
//    int index = 0;
//    int entry = 1;
//    account outputAccount;
//    string lineOfText;
//
//    while (!file.eof())
//    {
//        index++;
//
//        switch (index)
//        {
//        case 1:
//            getline(file, lineOfText);
//
//            outputAccount.name = lineOfText;
//
//            break;
//        case 2:
//            file >> outputAccount.number;
//
//            break;
//        case 3:
//            file >> outputAccount.balance;
//
//            //this will make sure only accounts with the minimum balance are output if this function was called in that mode
//            if ((outputAccount.balance >= minimumBalance) || (!minBalanceMode))
//            {
//                cout << "Account " << entry << " name: " << outputAccount.name << endl;
//                cout << "Account " << entry << " number: " << outputAccount.number << endl;
//                cout << "Account " << entry << " balance: " << outputAccount.balance << endl;
//            }
//
//            file.ignore();
//            index = 0;
//            entry++;
//            break;
//        }
//    }
//}