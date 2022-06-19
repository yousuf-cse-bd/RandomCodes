///Dimik Problem 2
///Author: Muhammad Yousuf Ali
///Since: 12/12/19

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int t,i,l;
    char num[101];

    cout<<"Enter Test Case: ";
    cin>>t;
    while(t>0)
    {
        cout<<"Enter a number: ";
        scanf("%s",num);
        for(l = 0; num[l] != '\0'; l++); ///Determining String length

        if(num[l-1] % 2 ==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        t--;
    }




    return 0;
}
