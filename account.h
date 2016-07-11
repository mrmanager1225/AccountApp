#pragma once

class Account
{
public:
	// Public functions
	void getAcctNum();
	void printAcctNum();
	void getCheckSaving();
	void printAcctType();
	void isValid();
	void getNumOfAccts();
	void setArrayNum();
	void printOutArray();
	void acctArrayEntry();
protected:

private:
	// Private integers
	int accountNumber;
	int checkingSaving;
	int numOfAccts;

	// Private array
	int accounts[];
};