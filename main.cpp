// Created by: Austin Noyes
// July 5th, 2016

#include <iostream>
#include "account.h"
using namespace std;

int main()
{
	Account account;																										// Creates object for access to 'Account' class

	account.getAcctNum();
	account.getCheckSaving();
	account.isValid();
	account.printAcctNum();
	account.printAcctType();

	system("PAUSE");
	return 0;
}