#include <bits/stdc++.h>
using namespace std;


long long multiply(int base, int power, int moduler)
{
    long long result = 1;
    for(int i = 1; i<= power; i++)
    {
        result = result * base;
        result = result % moduler;
    }
    return result;
}

int main(int argc, char const *argv[])
{
//     (10 % 2 == 1)?printf("Even"):printf("Odd\n");
//     cout<<"GCD = "<<__gcd(160, 7)<<endl;
//     for(int i = 1; i<=10; i++)
//     {
//         cout<<i<<endl;
//     }

//     int num {0};
//     cout<<num<<endl;

    int i;
    for(i = 1; i<=10; i++);
    cout<<i<<endl;


    cout<<"Result = "<<multiply(7, 5, 71)<<endl;

    return 0;
}
