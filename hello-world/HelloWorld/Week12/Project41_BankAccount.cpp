#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "BaseAccount.h"
#include "JuniorAccount.h"
#include "SavingsAccount.h"

using namespace std;

enum AccountType
{
    GENERAL = 0,
    JUNIOR,
    SAVINGS
};

vector<BaseAccount> accounts;
string global_fileName = "accounts.txt";

int main()
{
    //start by loading all accounts.
    //note that account number and type come first
    cout << "Loading all accounts into database..." << endl;
    loadAllAccounts();


}

void loadAllAccounts()
{
    fstream file(global_fileName);

    int accountIndex = 0;
    BaseAccount newAccount;

    if (!file.is_open())
    {
        cout << "Error, file did not open." << endl;
        return;
    }

    while (!file.eof())
    {

    }
}

bool saveAccount()
{

}

bool removeAccount(int accountIndex)
{

}