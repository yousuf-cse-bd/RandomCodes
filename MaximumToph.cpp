/**
 * @file MaximumToph.cpp
 * @author your name (you@domain.com)
 * @brief Given NN numbers, find the one that is of the highest value and print it.
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstdarg>
using namespace std;

int maximum(int argCount, ...)
{
    int maxValue, temp;

    va_list v;
    va_start(v, argCount);
    
    maxValue = va_arg(v, int);

    for(unsigned int i = 2; i<=argCount; i++)
    {
        if((temp = va_arg(v, int)) > maxValue)
        {
            maxValue = temp;
        }
    }
    va_end(v);
    return maxValue;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Maximum Value: "<<maximum(3, 4, 2, 7)<<endl;
    return 0;
}
