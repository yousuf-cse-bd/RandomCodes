#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"


/*Utility helper function for Account class*/
void display(const vector <Account> &accounts);
void deposit(vector <Account> &accounts, double amount);
void withdraw(vector <Account> &accounts, double amount);

/*Utility helper function for SavingAccount class*/

void display(const vector <SavingsAccount> &savingsAccounts);
void deposit(vector <SavingsAccount> &savingsAccounts, double amount);
void withdraw(vector <SavingsAccount> &savingsAccounts,  double amount);

#endif