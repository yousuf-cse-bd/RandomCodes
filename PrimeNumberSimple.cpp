///Author: Muhammad Yousuf Ali
///Since: 11-12-2019

#include <iostream>
using namespace std;

int main()
{

    int num,i;
    bool flag  = true;
    while(1)
    {
        cout<<"Input Number Here: ";
        cin>>num;
        if(num == 0)
        {
            return 0;
        }
        else
        {
            for(i = 2 ; i * i <= num; i++)
            {
                if(num % i == 0)
                {
                    flag = false;
                }
            }
            if(flag == true)
            {
                cout<<num<<" is Prime Number."<<endl;
            }
            else
            {
                cout<<num<<" is not Prime Number."<<endl;
            }
        }
        flag = true;
    }


    return 0;
}
