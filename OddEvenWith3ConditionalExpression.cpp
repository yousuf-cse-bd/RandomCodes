/**
 * @file OddEvenWith3ConditionalExpression.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Checking odd-even number using three kind of conditional expression
 * @version 0.1
 * @date 2022-11-30
 * @since WednesDay; 11:50 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int number{0};
    cout<<"Enter a number here: ";
    cin>>number;

    /*Make it absolute number*/
    number = (number < 0)? number*(-1): number;

    /*Check odd-even using if else*/
    if(number % 2 == 0){
        cout<<"The "<<number<<" is even."<<endl;
    }else{
        cout<<"The "<<number<<" is odd."<<endl;
    }
    /*Check odd-even using ternary operator*/
    cout<<"The "<<number<<((number % 2 == 0)?" is even.": " is odd")<<endl; /*InLine*/
    /*Check odd-even using switch-case statement*/
    switch (number % 2){
    case 0:
        cout<<"The "<<number<<" is even."<<endl;
        break;
    default:
        cout<<"The "<<number<<" is odd."<<endl;
        break;
    }

    return 0;
}
