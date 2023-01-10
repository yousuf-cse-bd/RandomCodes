/**
 * @file NumberSystemShowBase.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Show number base uppercase and nouppercase
 * @version 0.1
 * @date 2023-01-10
 * @since TuesDay; 05:50 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int positiveInt {15};
    cout<<"Positive-Int (noshowbase: defualt):"<<endl;
    cout<<"Positive-Int (dec): "<<dec<<positiveInt<<" in Decimal."<<endl;
    cout<<"Positive-Int (oct): "<<oct<<positiveInt<<" in Octal."<<endl;
    cout<<"Positive-Int (hex): "<<hex<<positiveInt<<" in Hexadecimal."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Positive-Int (showbase-lowercase):"<<endl;
    cout<<showbase;
    cout<<"Positive-Int (dec): "<<dec<<positiveInt<<" in Decimal."<<endl;
    cout<<"Positive-Int (oct): "<<oct<<positiveInt<<" in Octal."<<endl;
    cout<<"Positive-Int (hex): "<<hex<<positiveInt<<" in Hexadecimal."<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"Positive-Int (showbase-uppercase):"<<endl;
    cout<<showbase<<uppercase;
    // cout<<uppercase;
    cout<<"Positive-Int (dec): "<<dec<<positiveInt<<" in Decimal."<<endl;
    cout<<"Positive-Int (oct): "<<oct<<positiveInt<<" in Octal."<<endl;
    cout<<"Positive-Int (hex): "<<hex<<positiveInt<<" in Hexadecimal."<<endl;
    return 0;
}
