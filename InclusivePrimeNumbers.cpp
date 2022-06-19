#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int num1, num2;
    cout<<"Enter Number1 Here: ";
    cin>>num1;
    cout<<"Enter Number2 Here: ";
    cin>>num2;

    if(__gcd(num1, num2) == 1)
    {
        cout<<"Inclusive Prime Number."<<endl;
    }
    else
    {
        cout<<"Not Inclusive Prime Number...!"<<endl;
    }
    return 0;
}
