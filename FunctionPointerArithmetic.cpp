/**
 * @file FunctionPointerArithmetic.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple arithmetic operation and menu control using function pointer array
 * @version 0.1
 * @date 2022-12-22
 * @since ThursDay; 11:56 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

long double adder(const double number1, const double number2){
    return (number1 + number2);
}
long double subtractor(const double number1, const double number2){
    return (number1 - number2);
}
long double multiplier(const double number1, const double number2){
    return (number1 * number2);
}
long double divider(const double number1, const double number2){
    if(number2 != 0){
        return (number1 / number2);
    }
    return 0;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    long double (*arithmeticOperations[])(double, double) {adder, subtractor, multiplier, divider};
    double number1{}, number2{};
    int option {0};
    do{
        cout<<"Enter your first number here: ";
        cin>>number1;
        cout<<"Enter your next number here: ";
        cin>>number2;
        cout<<"\n-----------------------------------------------------"<<endl;
        cout<<"\t0 for Adder:"<<endl;
        cout<<"\t1 for Subtractor:"<<endl;
        cout<<"\t2 for Muliplier:"<<endl;
        cout<<"\t3 for Divider:"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        cin>>option;
        if(option >= 0 && option <= 3){
            cout<<"The result: "<<(*(arithmeticOperations + option))(number1, number2)<<endl;
        }
               
    } while (option >= 0 && option <= 3);
    cout<<"\t\t\tEXIT...!"<<endl;

    return 0;
}
