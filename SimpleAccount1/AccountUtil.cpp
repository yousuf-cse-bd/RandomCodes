#include <iostream>
#include "AccountUtil.h"
using namespace std;

/*Display Account object in a vector of Account object*/
void display(const vector <Account> &accounts){
	cout<<"\n===Accounts==============================================="<<endl;
	for(const auto &accX: accounts){
		cout<<accX<<endl;
	}
}

/*Deposits supplied amount to each Account object in the vector*/
void deposit(vector <Account> &accounts, double amount){
	cout<<"\n===Depositing to Accounts=================================="<<endl;
	for(auto &accX: accounts){
		if(accX.deposit(amount)){
			cout<<"Deposited "<<amount<<" to "<<accX<<endl;
		}
		else{
			cout<<"Failed Deposit of "<<amount<<" to "<<accX<<endl;
		}
	}
}
/*Withdraw amount from each Account object in the vector*/
void withdraw(vector <Account> &accounts, double amount){
	cout<<"\n===Withdrawing from Accounts=============================="<<endl;
	for(auto &accX: accounts){
		if(accX.withdraw(amount)){
			cout<<"Withdrew "<<amount<<" from "<<accX<<endl;
		}
		else{
			cout<<"Faild Withdrawal of "<<amount<<" from "<<accX<<endl;
		}
	}
}

/*Helper functions for SavingAccount class*/
/*Displays SavingsAccount objects in a vector of SavingsAccount objects*/
void display(const vector <SavingsAccount> &savingsAccounts){
	cout<<"\nSavings Accounts======================================="<<endl;
	for(const auto &savingsAccx: savingsAccounts){
		cout<<savingsAccx<<endl;
	}
}
/*Deposits supplied to each Savings Account object in the vector*/
void deposit(vector <SavingsAccount> &savingsAccounts, double amount){
	cout<<"\nDepositing to Savings Accounts================================"<<endl;
	for(auto &savingsAccx: savingsAccounts){
		if(savingsAccx.deposit(amount)){
			cout<<"Deposited "<<amount<<" to "<<savingsAccx<<endl;
		}
		else{
			cout<<"Failed Deposite of "<<amount<<" to "<<savingsAccx<<endl;
		}
	}
}
/*Withdraw supplied amount from each  Savings Account object in the vector*/
void withdraw(vector <SavingsAccount> &savingsAccounts,double amount){
	cout<<"\n===Withdrawing from Saving Accounts=============================="<<endl;
	for(auto &savingsAccx: savingsAccounts){
		if(savingsAccx.withdraw(amount)){
			cout<<"Withdrew "<<amount<<" from "<<savingsAccx<<endl;
		}
		else{
			cout<<"Faild Withdrawal of "<<amount<<" from "<<savingsAccx<<endl;
		}
	}
}