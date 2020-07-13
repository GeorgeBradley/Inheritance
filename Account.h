#pragma once
#include <iostream>
class Account
{
private:
	double dBalance;
public:
	Account();
	void Display_Balance();
	bool Withdraw(double dWithdraw);
	bool Deposit(double dDeposit);
	
};

