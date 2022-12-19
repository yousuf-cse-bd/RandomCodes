#include "Account.h"

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