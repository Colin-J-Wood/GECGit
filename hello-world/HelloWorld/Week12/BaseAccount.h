#pragma once
class BaseAccount
{
public:
	string surname;
	string forename;
	string address;
	double balance;
	double interestRate;
	int accountNumber;
	AccountType accountType;

	void setAccountNumber(int new_accountNumber);
	double getClosureValue();

	BaseAccount(string new_surname, string new_forename, string new_address, double new_balance)
	{
		surname = new_surname;
		forename = new_forename;
		address = new_address;
		balance = new_balance;

		interestRate = 0.2;
		accountType = GENERAL;
	}

	BaseAccount()
	{
		interestRate = 0.2;
		accountType = GENERAL;
	}
};

