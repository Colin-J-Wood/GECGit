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
    accounts.push_back(loadAccount());
}

BaseAccount loadAccount(int accountIndex)
{
    BaseAccount accountLoaded;



    return accountLoaded;
}

bool saveAccount()
{

}

bool removeAccount()
{

}