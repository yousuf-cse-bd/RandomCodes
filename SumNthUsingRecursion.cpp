/**
 * @file SumNthUsingRecursion.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

unsigned int sum(unsigned int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n + sum(n-1));
    }   
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Sum of 10 = "<<sum(5)<<endl;
    return 0;
}
