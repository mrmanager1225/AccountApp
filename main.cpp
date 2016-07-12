// Created by: Austin Noyes	
// July 5th, 2016
// LAST UPDATED: July 11th by JK

#include <iostream>
#include "account.h"
using namespace std;

int main()
{
	Account account;											// Creates object for access to 'Account' class
	int *p_numOfAccts;
	p_numOfAccts = &account.numOfAccts;

	account.getNumOfAccts();

	do
	{
		account.getAcctNum();
		cout << *p_numOfAccts << endl;
		account.getCheckSaving();
		cout << *p_numOfAccts << endl;
		account.isValid();
		cout << *p_numOfAccts << endl;
		account.setArrayNum();
		cout << *p_numOfAccts << endl;
		account.arrayEntry();
		cout << *p_numOfAccts << endl;
	} while (*p_numOfAccts > 0);

	// account.printAcctNum();
	// account.printAcctType();
	// account.printOutArray();

	system("PAUSE");
	return 0;
}