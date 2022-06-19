/*****
 * @Author: Muhammad Yousuf Ali
 * @Since: Wednes Day,22 January 2020
 */

#include <iostream>
using namespace std;

int main()
{
    int n,a;
    cout<<"Enter a Number: ";
    cin>>n;
    a = n / 2;
    a = a * 2 + 1;
    if(a == n)
    {
        cout<<"Odd"<<endl;
    }
    else
    {
        cout<<"Even"<<endl;
    }
    
    return 0;
}