/**
 * @file: DynamicPolimorphismHEAP.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: This class uses dynamic polymorphism for the withdraw method
 * @version: 0.1
 * @date: 2023-02-25
 * @since: SunDay; 09:23 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;
/*This class uses dynamic polymorphism for the withdraw method*/
class Account{
public:
	virtual	void withdraw(double const &amount){
		cout<<"Account:: Withdraw()"<<endl;
	}
	virtual ~Account() = default;
};

class Checking: public Account{
public:
	virtual void withdraw(double const &amount){
		cout<<"Checking:: Withdraw()"<<endl;
	}
	virtual ~Checking() = default;
};

class Savings: public Account{
public:
	virtual void withdraw(double const &amount){
		cout<<"Savings:: Withdraw()"<<endl;
	}
	virtual ~Savings() = default;
};

class Trust: public Account{
public:
	virtual void withdraw(double const &amount){
		cout<<"Trust:: Withdraw()"<<endl;
	}
	virtual ~Trust() = default;
};

int main(int argc, char const **argv){
	system("cls");
	cout.precision(1);
	cout<<fixed;
	
	cout<<"Using Poinnters"<<endl;
	Account *p1 = new Account{};
	Account *p2 = new Savings{};
	Account *p3 = new Checking{};
	Account *p4 = new Trust{};
	
	p1->withdraw(100);
	p2->withdraw(100);
	p3->withdraw(100);
	p4->withdraw(100);

	cout<<"\nUsing Array"<<endl;
	Account *array[] {p1, p2, p3, p4};
	for(const auto x: array){
		x->withdraw(100);
	}
	
	cout<<"\nUsing Vector"<<endl;
	vector<Account*> accounts{p1, p2, p3, p4};
	for(const auto acc: accounts){
		acc->withdraw(100);
	}
	
	cout<<"***Clean Up***"<<endl;
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	
	p1 = nullptr;
	p2 = nullptr;
	p3 = nullptr;
	p4 = nullptr;
	return 0;
}