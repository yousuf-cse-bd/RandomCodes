
#include "Account.h"

Account :: Account(const std::string_view &name, const double &balance)
	:name{name}, balance{balance}{
		
	}
	
bool Account :: deposit(const double &amount){
	if(amount < 0){
		return false;
	}
	else{
		balance += amount;
		return true;
	}
}
bool Account :: withdraw(const double &amount){
	if(balance - amount >= 0){
		balance -= amount;
		return true;
	}
	else{	
		return false;
	}
}

double Account :: getBalance(void) const{
	return balance;
}

ostream &operator << (ostream &output, const Account &account){
	output << "[Account: "<<account.name<<": "<<account.balance<<"]";
	return output;
}


