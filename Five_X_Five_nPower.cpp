// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    if(5 * 5 == pow(5, 2)){
        int mult = 5 * 5;
        cout<<"5x5 = "<<mult<<endl;
        printf("Equal\n");
    }
    else
    {
        printf("!Equal\n");
        int a = 5 * 5;
        cout<<"A = "<<a<<endl;
        int b = pow(5, 2);
        cout<<"B = "<<b<<endl;
    }
    return 0;
}
