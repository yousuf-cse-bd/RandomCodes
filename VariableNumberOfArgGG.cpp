/**
 * @file VariableNumberOfArgGG.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// C++ program to demostrate use of variable number of agrumnents
#include <iostream>
#include <cstdarg>
using namespace std;

// This function return minimum of integer
// number passed. First argument is count of numbers

double min(int argCount, ...)
{
    double min, a;

    // va_list is a type to hold information about
    // variable arguments
    va_list valist;
    // va_start must be called before accessing
    // variable arguments list
    va_start (valist, argCount);

    // Now arguments can be accessed one by one 
    // using va_arg macro.
    // Initialize min as first argument in list 
    min = va_arg(valist, double);
    // traverse rest of the rgument to find of minimum
    for(int i = 2; i<=argCount; i++)
    {
        if((a = va_arg(valist, double)) < min)
        {
            min = a;
        }
    }

    // va_end should be executed before the function
    // returns whenever va_start has been previously
    // used in that function

    va_end(valist);
    return min;
}

int main(int argc, char const *argv[])
{
    /* code */
    int count = 5;
    cout<<"Minimum Value is: "<<min(count, 12.5, 67.1, 61.2, 73.2, 100.12);
    return 0;
}
