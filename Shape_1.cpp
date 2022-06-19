///Muhammad Yousuf Ali
///MonDay, 18 November 2019

#include <iostream>
using namespace std;

int main(void)
{

    int n,i,j;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    for(i = 1 ; i<= n ; i++)
    {
        for(j = 1 ; j<=i; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}
