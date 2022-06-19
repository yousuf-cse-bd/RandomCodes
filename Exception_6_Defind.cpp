/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Defind a New Exception**** 
 */

//#include <bits/stdc++.h> ///Consists "exception" header file
#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception
{
    virtual const char* what() const throw()
    {
        return "My Exception Happend.\n";
    }
};

int main(void)
{
    MyException myex = MyException();
    try
    {
        throw myex;
    }
    catch(exception &e)
    {
        cout<<e.what()<<endl;
    }
    return 0;
}