/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Catching All Exception**** 
 */

#include <iostream>
using namespace std;

void xHandeler(int test)
{
    try
    {
        if(test == 0) throw test; //throw integer
        if(test == 'a') throw 'a';//throw character
        if(test == 2) throw  3.14159;//throw double
    }
    catch(int i) ///catch integer
    {
        cout<<"Caught an Interger."<<endl; // Not Execute Output
    }
    catch(...)///catch all other exceptions
    {
        cout<<"Caught One!"<<endl;
    }
}

int main(void)
{
    cout<<"Start..."<<endl;
    xHandeler(1);
    xHandeler(2);
    xHandeler(3);

    cout<<"End."<<endl;

    return 0;
}