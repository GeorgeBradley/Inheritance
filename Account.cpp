#include "Account.h"
Account::Account() :dBalance(0) {

}
void Account::Display_Balance() {
	std::cout << "Your bank balance is: " << dBalance << "."<< std::endl;

}
bool Account::Withdraw(double dWithdraw) {
	if (dBalance - dWithdraw >= 0)
	{
		dBalance -= dWithdraw;
		std::cout << "Withdraw successful." << std::endl;
		return true;
	}
	else 
	{
		std::cout << "Insufficient funds. ";
		std::cout << "You tried to withdraw " << dWithdraw << " from your bank balance of " << dBalance << "." << std::endl;
		
		return false;
	}
}
bool Account::Deposit(double dDeposit) {
	dBalance += dDeposit;
	std::cout << "Amount deposited: " << dDeposit << "." << std::endl;
	return true;
}
