#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n<2) return false;
    for(int i = 2; i * i <= n ;i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    /* code */
    cout<<isPrime(1000000007)<<endl;
    return 0;
}
