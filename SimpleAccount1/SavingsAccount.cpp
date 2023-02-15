#include "SavingsAccount.h"

SavingsAccount ::SavingsAccount(const std::string_view &name, const double &balance, const double &intRate)
	:Account{name, balance}, intRate{intRate}{
	}
/*Deposite():
 * 	Amount supplied to deposite will be incremented by (amount * intRate / 100)
 * and then the updated amount will be deposited
 */
 bool SavingsAccount :: deposit(double &amount){
	 amount += (amount * (intRate/100));
	 return Account::deposit(amount); /*???*/
 }
 
 std:: ostream &operator <<(std::ostream &output, const SavingsAccount &savingsAccount){
	 output<<"[SavingAccount: "<<savingsAccount.name<<": "<<savingsAccount.balance<<": "<<savingsAccount.intRate<<" %]";
	 return output;
 }