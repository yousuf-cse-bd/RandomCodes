/**
 * @file MixedFractionMyStyle.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int divisor, divisible, quotient, remainder;

    cout<<"Enter value of Divisible: ";
    cin>>divisible;
    cout<<"Enter value of Divisor: ";
    cin>>divisor;

    cout<<divisible<<"_\n"<<divisor<<endl;
    quotient = divisible / divisor;
    remainder = divisible % divisor;

    return 0;
} 