// Created by: Austin Noyes	
// July 5th, 2016 701-364-6600
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
		account.getCheckSaving();
		account.isValid();
		account.acctArrayEntry();
		//account.printAcctNum();
		//account.printAcctType();
		account.setArrayNum();
	} while (*p_numOfAccts > 0);

	account.printOutArray();

	#include "pause.h"
	return 0;
}