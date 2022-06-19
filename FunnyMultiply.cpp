#include <iostream>
using namespace std;

long long multiply(int base, int power, int moduler)
{
    long long result = 1;
    for(int i = 1; i<= power; i++)
    {
        result = result * base;
        // cout<<"Result1 = "<<result<<endl;
        result = result % moduler;
        // cout<<"Result2 = "<<result<<endl;
    }
    return result;
}

long long multy(int x, int y, int mod)
{
    long long lng = 1;
    for (int i = 1; i <= y; i++)
    {
        lng *= x;
        lng %= mod;
    }
    return lng;
}
int main(int argc, char const *argv[])
{
    cout<<multiply(13,5,9)<<endl;
    cout<<multy(13,5,9)<<endl;
    return 0;
}
