/**
 * @file FactorialUsingRecursion.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Recursion best example
 * @version 0.1
 * @date 2022-09-11
 * @since SunDay; 11:01 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

unsigned long long int factorial(unsigned short int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*(factorial(n - 1));
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned short int number = 10;
    cout<<number<<"! Factorial = "<<factorial(number)<<endl;
    return 0;
}
