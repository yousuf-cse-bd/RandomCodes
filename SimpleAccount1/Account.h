
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;
/*Just function prototype, not definition*/
class Account{
	friend ostream &operator <<(std::ostream &output, const Account &account);
private:
	static constexpr const char *const defName {"Unnamed Account"};
	static constexpr double defBalance {0.0};
protected:
	std::string name{};
	double balance{};
public:
	/*Defualt paramiterized constructor*/
	Account(const std::string_view &name = defName, const double &balance = defBalance);
	bool deposit(const double &amount);
	bool withdraw(const double &amount);
	double getBalance (void) const;
};

#endif