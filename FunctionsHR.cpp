///Greatest value return from 4 integer using function

#include <iostream>
using namespace std;

int greatestValue(int n1, int n2, int n3, int n4)
{
    int grt = max(n1, max(n2, max(n3, n4)));
    return grt;
}

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4;
    cin>>num1>>num2>>num3>>num4;

    int greatest = greatestValue(num1, num2, num3, num4);

    cout<<greatest<<endl;
    return 0;
}
