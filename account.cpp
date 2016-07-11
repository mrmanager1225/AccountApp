#include <iostream>
#include "account.h"
using namespace std;

// Function receives the user input for the account number
void Account::getAcctNum()
{
	cout << "Please enter the account number: ";
	cin >> accountNumber;
}

// Function prints out the account number as entered in getAcctNum()
void Account::printAcctNum()
{
	cout << "The account number is " << accountNumber << endl;
}

// Function uses the user's input to determine whether it's checking or savings type acct
void Account::getCheckSaving()
{
	cout << "Is this a checking (1) or savings (2) account: " << endl;
	cin >> checkingSaving;
}

// Function decides whether account type choice was valid (1 or 2)
void Account::isValid()
{
	if (checkingSaving < 1 || checkingSaving > 2)
	{
		cout << "This is an invalid response." << endl;
	}
}

// Function prints the account type and number subsequently
void Account::printAcctType()
{
	if (checkingSaving == 1)
	{
		cout << "This is a checking account." << endl << endl;
	}
	else if (checkingSaving == 2)
	{
		cout << "This is a savings account." << endl << endl;
	}
}