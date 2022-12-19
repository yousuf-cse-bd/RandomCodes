#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account{
private:
    /*Class Attributes*/
    std :: string name {};
    double balance {};
public:
    /*Class methods inline functions*/
    void setName(const std :: string name){
        this->name = name;
    }
    std :: string getName(void){
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
#endif /*_ACCOUNT_H_*/