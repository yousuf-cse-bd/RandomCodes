/**
 * @file main.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple account balance transaction and used to setter & getter method
 * @version 0.1
 * @date 2022-12-19
 * @since MonDay; 04:26 PM
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include "Account.h"
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const string name {"Yousuf"};
    constexpr double balance {1000.25};
    Account yousufAccount;
    yousufAccount.setName(name);
    yousufAccount.setBalence(balance);

    cout<<"\tCurrent Account Update"<<endl;
    cout<<"The name: "<<yousufAccount.getName()<<endl;
    cout<<"Your balance: "<<yousufAccount.getBalance()<<" $"<<endl;

    cout<<"----------------------------------------------------------"<<endl;
    if(yousufAccount.depositeAmount(100)){
        cout<<"Deposite OK."<<endl;
        cout<<"Your balance: "<<yousufAccount.getBalance()<<" $"<<endl;
    }else{
        cout<<"Deposite not allowed."<<endl;
    }
    cout<<"----------------------------------------------------------"<<endl;
    if(yousufAccount.withdrawAmount(1000.3)){
        cout<<"Withdraw OK."<<endl;
        cout<<"Your balance: "<<yousufAccount.getBalance()<<" $"<<endl;
    }else{
        cout<<"Not sufficient funds."<<endl;
    }
    return 0;
}
