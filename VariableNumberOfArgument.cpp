/**
 * @file VariableNumberOfArgument.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Discuss about parameter and arguments
 * @version 0.1
 * @date 2022-06-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

void function(char n1, int n2, double n3)
{
    cout<<"N1 = "<<n1<<"\nN2 = "<<n2<<"\nN3 = "<<n3<<endl;
}
#include <cstdarg>
double average(unsigned num, ...)
{
    // Variable list
    va_list valist;
    double sum = 0.0;
    int i;
    /*Initialize valist for num number of arguments*/
    va_start(valist, num);
    /*Access all the argumnents assigned to valist*/
    for(i = 0; i<num; i++)
    {
        sum += va_arg(valist, int);
    }
    /*Clean memory reserved valist*/
    va_end(valist);
    return sum / num;
}
int main(int argc, char const *argv[])
{
    /* code */
    // function('A',101, 3.35);
    cout<<"Average of 2, 3, 4, 5 = "<<average(4, 2, 3, 4, 5)<<endl;
    cout<<"Average of 5, 10, 15 = "<<average(3, 5, 10, 15)<<endl;

    return 0;
}
