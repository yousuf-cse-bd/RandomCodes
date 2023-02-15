#ifndef SAVINGS_ACCOUNT
#define SAVINGS_ACCOUNT
#include "Account.h"

/*
 * Savings account is a type of account, add an interest rate
 * Withdraw - s ame as regular account
 * Deposite:
 * Amount supplied to deposite will be incremented by (amount * intRate/100)
 * and then the update amount will be deposited
*/

class SavingsAccount : public Account{
	friend std::ostream &operator <<(std::ostream &output, const SavingsAccount &savingsAccount);
private:
	static constexpr const char *const defName {"Unnamed Savings Account"};
	static constexpr double defBalance {0.0};
	static constexpr double defIntRate {0.0};
protected:
	double intRate {};
public:
	SavingsAccount(const std::string_view &name = defName, const double &balance = defBalance, const double &intRate = defIntRate);
		
	/*@override method from Account class*/
	bool deposit(double &amount);
	/*Inherits the Account::withdraw methods*/
};
	
#endif