/**
 * @project: Simple Account 1
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief: Simple banking accounting 
 * @version: 0.1
 * @date: 2023-02-15
 * @since: WednesDay; 11:33 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <iomanip>
#include "Account.h"
#include "SavingsAccount.h"
#include "AccountUtil.h"
#pragma pack(1)
int main(int argc, char **argv){
	cout<<fixed<<setprecision(2)<<endl;
	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Larry"});
	accounts.push_back(Account{"Moe", 2000});
	accounts.push_back(Account{"Curly", 5000});
	
	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);
	
	
	vector <SavingsAccount> savingsAccounts;
	savingsAccounts.push_back(SavingsAccount{});
	savingsAccounts.push_back(SavingsAccount{"SuperMan"});
	savingsAccounts.push_back(SavingsAccount{"BatMan", 2000});
	savingsAccounts.push_back(SavingsAccount{"WonderWoman", 5000, 5.00});
	
	display(savingsAccounts);
	deposit(savingsAccounts, 1000);
	withdraw(savingsAccounts, 2000);
	
	return 0;
}
