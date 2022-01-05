#pragma once
#include "BaseAccount.h"
class SavingsAccount :
    public BaseAccount
{
    SavingsAccount(string new_surname, string new_forename, string new_address, double new_balance)
	{
		surname = new_surname;
		forename = new_forename;
		address = new_address;
		balance = new_balance;

		interestRate = 4.5;
		accountType = SAVINGS;
	}

	SavingsAccount()
	{
		interestRate = 4.5;
		accountType = SAVINGS;
	}
};

