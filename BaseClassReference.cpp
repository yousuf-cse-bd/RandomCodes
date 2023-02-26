/**
 * @file: BaseClassReference.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: Polymorphism: Base Class Reference (Dynamic binding)
 * @version: 0.1
 * @date: 2023-02-26
 * @since: SunDay; 04:42 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Account{
public:
	Account() = default;
	virtual void withdraw(const double &amount) const{
		if(amount > 0){
			cout<<"In Account:: Withdraw() done."<<endl;
		}
		else{
			cout<<"In Account:: Withdraw() failed!"<<endl;
		}
	}
	virtual ~Account() = default;
};

class Savings : public Account{
	public:
	Savings() = default;
	virtual void withdraw(const double &amount) const override{
		if(amount > 0){
			cout<<"In Savings:: Withdraw() done."<<endl;
		}
		else{
			cout<<"In Savings:: Withdraw() failed!"<<endl;
		}
	}
	virtual ~Savings() = default;
};

class Checking : public Account{
	public:
	Checking() = default;
	virtual void withdraw(const double &amount) const override{
		if(amount > 0){
			cout<<"In Checking:: Withdraw() done."<<endl;
		}
		else{
			cout<<"In Checking:: Withdraw() failed!"<<endl;
		}
	}
	virtual ~Checking() = default;
};

class Trust : public Account{
	public:
	Trust() = default;
	virtual void withdraw(const double &amount) const override {
		if(amount > 0){
			cout<<"In Trust:: Withdraw() done."<<endl;
		}
		else{
			cout<<"In Trust:: Withdraw() failed!"<<endl;
		}
	}
	virtual ~Trust() = default;
};

const void doWithdraw(const Account &account, const double &amount){
	account.withdraw(amount);
}


int main(int argc, const char **const argv){
	system("cls");
	Account a;
	Account &ref1 {a};
	ref1.withdraw(1000);
	
	Trust t;
	Account &ref2 {t};
	ref2.withdraw(1000);
	cout<<"---------------------------------------------"<<endl;
	Account a1{};
	Savings a2{};
	Checking a3{};
	Trust a4{};
	doWithdraw(a1, 100);
	doWithdraw(a2, 200);
	doWithdraw(a3, 300);
	doWithdraw(a4, 400);
	printf("\nHappyEnding %c%c\n", 2,2);
	return 0;
}