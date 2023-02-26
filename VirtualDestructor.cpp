/**
 * @file: VirtualDestructor.cpp
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: If base class destructor is virtual then all derived class destructors are also virtual
 * @version: 0.1
 * @date: 2023-02-26
 * @since: SunDay; 12:00 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

/**
*Solution/Rule:
  If a class has virtual functions
  ALWAYS provide a public virtual destructor
  If base class destructor is virtual then all derived class destructors are also virtual
*/

class Account{
public:
	virtual void withdraw(const double &amount)const{
		if(amount > 0){
			cout<<"In Account:: withdraw() done."<<endl;
		}
		else{
			cout<<"In Account:: withdraw() failed."<<endl;
		}
	}
	virtual ~Account(){
		cout<<"\tAccount:: Destructor~"<<endl;
	} 
};

class Savings: public Account{
public:
	 void withdraw(const double &amount)const{
		if(amount > 0){
			cout<<"In Savings:: withdraw() done."<<endl;
		}
		else{
			cout<<"In Savings:: withdraw() failed."<<endl;
		}
	}
	virtual ~Savings(){
		cout<<"\tSavings:: Destructor~"<<endl;
	} 
};

class Checking: public Account{
public:
	void withdraw(const double &amount)const{
		if(amount > 0){
			cout<<"In Checking:: withdraw() done."<<endl;
		}
		else{
			cout<<"In Checking:: withdraw() failed."<<endl;
		}
	}
	virtual ~Checking(){
		cout<<"\tChecking:: Destructor~"<<endl;
	} 
};

class Trust: public Account{
public:
	 void withdraw(const double &amount)const{
		if(amount > 0){
			cout<<"In Trust:: withdraw() done."<<endl;
		}
		else{
			cout<<"In Trust:: withdraw() failed."<<endl;
		}
	}
	virtual ~Trust(){
		cout<<"\tTrust:: Destructor~"<<endl;
	} 
};


int main(int argc, char const** argv){
  
	cout<<"===Pointer Array==="<<endl;
	Account *array [] {new Account{}, new Savings{}, new Checking{}, new Trust{}};
	for(const auto &object: array){
		object->withdraw(100);
	}
	cout<<"===Clean UP==="<<endl;
	for(auto &object: array){
		delete object;
		object = nullptr;
	}
	
	printf("\nHappy Ending %c%c\n", 2, 2);

    return 0;
}