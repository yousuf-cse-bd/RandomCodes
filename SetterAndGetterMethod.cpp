/**
 * @file SetterAndGetterMethod.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple account balance transaction and used to setter & getter method
 * @version 0.1
 * @date 2022-12-19
 * @since MonDay; 04:05 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Account{
private:
    /*Class Attributes*/
    string name {};
    double balance {};
public:
    /*Class methods inline functions*/
    void setName(const string name){
        this->name = name;
    }
    string getName(void){
        return name;
    }

    void setBalence(const double balance){
        this->balance = balance;
    }
    double getBalance(void){
        return balance;
    }
    /*Class methods out-side the class*/
    bool depositeAmount(double amount);
    bool withdrawAmount(double amount);
};

bool Account :: depositeAmount(double amount){
    /*If verify amount*/
    balance += amount;
    return true;
}
bool Account :: withdrawAmount(double amount){
    constexpr double essentialAmount {100.0};
    if(balance - amount >= essentialAmount){ /*MyStyle: if(balance >= amount)*/
        balance -= amount;
        return true;
    }else{
        return false;
    }
}
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
