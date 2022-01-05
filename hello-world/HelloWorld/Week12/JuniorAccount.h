#pragma once
#include "BaseAccount.h"
class JuniorAccount :
    public BaseAccount
{
    JuniorAccount(string new_surname, string new_forename, string new_address, double new_balance)
	{
		surname = new_surname;
		forename = new_forename;
		address = new_address;
		balance = new_balance;

		interestRate = 1.5;
        accountType = JUNIOR;
    }

	JuniorAccount()
	{
		interestRate = 1.5;
		accountType = JUNIOR;
	}
};

