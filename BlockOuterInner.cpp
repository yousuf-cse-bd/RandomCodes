/**
 * @file BlockOuterInner.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 20;
    int b = 10;
    {
        cout<<"\tInside,b = "<<b<<endl;
        int a = 0;
        cout<<"\tInner,a = "<<a<<endl;
        int c = a + b;
        cout<<"\tInner,c = "<<c<<endl;
    }
    b = a;
    cout<<"Outer, b = "<<b<<endl;
    return 0;
}
