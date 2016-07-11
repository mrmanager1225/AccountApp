// Created by: Austin Noyes
// July 5th, 2016
// LAST UPDATED: July 11th

#include <iostream>
#include "account.h"
using namespace std;

int main()
{
	Account account;																										// Creates object for access to 'Account' class

	account.getNumOfAccts();
	account.getAcctNum();
	account.getCheckSaving();
	account.isValid();
	account.acctArrayEntry();
	account.printAcctNum();
	account.printAcctType();
	account.setArrayNum();
	account.printOutArray();

	system("PAUSE");
	return 0;
}