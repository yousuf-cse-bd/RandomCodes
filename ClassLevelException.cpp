/**
 * @file ClassLevelException.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Best practice class level exception
 * @version 0.1
 * @date 2023-03-07
 * @since TuesDay; 11:38 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
#pragma pack(1)
using namespace std;

class IllegalBalanceException{
public:
	IllegalBalanceException(void) = default;
	~IllegalBalanceException(void) = default;
};

class Account{
	friend ostream &operator<< (ostream &out, const Account &account){
		account.print(out);
		return cout;
	}
	virtual void print(ostream &cout) const = 0;
public:
	Account(void) = default;
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;
	virtual ~Account(void) = default;
};

class CheckingAccount final : public Account{
	virtual void print(ostream &cout) const override{
		cout<<"CheckingAccount: ["<<name<<": "<<balance<<"$]";
	}	
private:
	static constexpr const char *const defName{"Unnamed CheckingAccount"};
	static constexpr double defBalance{0.00};
	string name{};
	double balance{};
public:
	CheckingAccount(const string_view &name = defName, const double &balance = defBalance)
		:name{name},balance{balance}{
		if(balance < 0.0){
			throw IllegalBalanceException{};
		}
	}
	virtual bool deposit(double amount) override{
		if(amount < 0.0){
			return false;
		}
		else{
			balance += amount;
			return true;
		}
	}
	
	virtual bool withdraw(double amount) override {
		if(balance - amount >= 0){
			balance -= amount;
			return true;
		}
		else{
			return false;
		}
	}
	virtual ~CheckingAccount(void) = default;
};

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	unique_ptr <Account> yousufAccount;

	try{
		yousufAccount = make_unique<CheckingAccount>("yousuf", 10);
		cout<<*yousufAccount<<endl;
		yousufAccount->deposit(10);
		yousufAccount->withdraw(10);
	}
	catch(const IllegalBalanceException &ex){
		cerr<<"Couldn't create account - negative balance...!"<<endl;
	}       
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}


