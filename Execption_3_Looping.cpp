/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Exception Handeling Looping Example**** 
 */

#include <iostream>
using namespace std;

int main(void)
{
    int x = 50;
    int y = 0;
    int i;
    double z;

    try
    {
        for(i = 1;i>0;i++)
        {
            cout<<"Value i = "<<i<<endl;
            throw i;
        }
    }
    catch(int e)
    {
        cout<<"Throwing Exception Occure."<<endl;
        cout<<"Value of e : "<<e<<endl;
    }

    return 0;
}