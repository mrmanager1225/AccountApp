#pragma once

class Account
{
public:
	// Public functions
	int numOfAccts;
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

	// Private array
	int accounts[];
};