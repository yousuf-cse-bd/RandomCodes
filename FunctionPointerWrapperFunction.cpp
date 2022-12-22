/**
 * @file FunctionPointerWrapperFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Check even or odd number using function pointer and wrapper function
 * @version 0.1
 * @date 2022-12-22
 * @since ThursDay; 12:25 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#pragma pack(1)
using namespace std;

void evenNumber(const int number){
    if(number % 2 == 0){
        cout<<number<<" is even."<<endl;
    }
}

void oddNumber(const int number){
    if(number % 2 == 1){
        cout<<number<<" is odd."<<endl;
    }
}

void wrapperFunction(const int &number, void (*evenOdd)(int)){
    evenOdd(number);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number;
    cout<<"Enter a positive number here: ";
    cin>>number;
    wrapperFunction(number, evenNumber);
    wrapperFunction(number, oddNumber);
    return 0;
}
