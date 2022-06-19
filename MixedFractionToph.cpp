/**
 * @file MixedFractionToph.cpp
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

    cin>>divisible>>divisor;
    quotient = divisible / divisor;
    remainder = divisible % divisor;

    cout<<quotient<<" "<<remainder<<" "<<divisor<<endl;

    return 0;
}
