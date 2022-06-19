#include <iostream>
#include <bitset>
using namespace std;

bitset <500001> Prime; //All bits false or 0
void sieveOfEratosthenes(int n)
{
    Prime[0] = 1;
    for(int i = 3; i*i <= n; i += 2)
    {
        if(Prime[i / 2] == 0)
        {
            for(int j = 3 * i; j<=n; j += 2 * i)
            Prime[j / 2] = 1;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 100;
    sieveOfEratosthenes(n);
    for(int i = 1; i<=n; i++)
    {
        if(i == 2)
        cout<<i<<' ';
        else if(i % 2 == 1 && Prime[i/2] == 0)
        cout<<i<<' ';
    }
    return 0;
}
