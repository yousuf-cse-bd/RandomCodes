/**
 * @file ClassObject.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Object oriented programming and C++ (First Pro)
 * @version 0.1
 * @date 2022-08-07
 * @since Sunday; 5:18 PM
 * @copyright Copyright (c) 2022
 */
#include <iostream>
#include <cstring>
using namespace std;

class Account{
    private:
    char accountNo[10];
    char accountType[10];
    double balance;

    public:
    Account(const char *no, const char *type, double bl){
        /*strcpy(to destination, from soucre*/
        strcpy(accountNo, no);
        strcpy(accountType, type);
        balance = bl;
    }

    void showInfo(){
        cout<<"Account Number: "<<accountNo<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    Account sam  = Account("SCB 0043", "Current", 5000.30);
    Account ram = Account("SCB 2323", "Fixed", 5000.35);

    sam.showInfo();
    ram.showInfo();

    char fNm[10] = "Yousuf";
    char lamae[10] = "ALi";
    return 0;
}
