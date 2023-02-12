/**
 * @file RelatedClass2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Just finding related class for accounting system
 * @version 0.1
 * @date 2023-02-12
 * @since SunDay; 11:09 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

class Account{
public:
    Account() = default;
    ~Account() = default;
};

class SavingAccount : public Account{
public:
    SavingAccount() = default;
    ~SavingAccount() = default;
};

class CheckingAccount : Account{
public:
    CheckingAccount() = default;
    ~CheckingAccount() = default;
};

class TrustAccount : public Account{
public:
    TrustAccount() = default;
    ~TrustAccount() = default;
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    return 0;
}
