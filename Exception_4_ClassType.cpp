/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Catching Class Types Exception**** 
 */

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

class MyException
{
    public:
    char str_what[80];
    int what;
    MyException()
    {
        *str_what = 0, what = 0;
    }
    MyException(char* s, int e)
    {
        strcpy(str_what,s);
        what = e;
    }
};

int main(void)
{
    try
    {
        int i;
        cout<<"Enter A Positive Value Here: ";
        cin>>i;
        if(i<0)
        throw MyException("Not Positive",i);
    }
    catch(MyException e) ///catch an error
    {
        cout<<e.str_what<<": "<<e.what<<endl;
    }

    return 0;
}