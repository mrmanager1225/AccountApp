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
protected:

private:
	// Private integers
	int accountNumber;
	int checkingSaving;
};