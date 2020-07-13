// Bank Account.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
int main()
{
	Account George;
	George.Display_Balance();
	George.Deposit(1000);
	George.Display_Balance();
	George.Withdraw(2000);
	George.Display_Balance();
}
