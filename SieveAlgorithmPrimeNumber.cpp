#include <iostream>
using namespace std;
#define MAX_SIZE 10000
bool marked[MAX_SIZE];

// bool isPrime(int n)
// {
//     if(n < 2) return false;
//     if(n % 2 == 0) return false;
//     if(n == 2) return true;
//     return marked[n] == false;
// }

void sieve(int n)
{
    for(int i = 3; i*i<=n; i++)
    {
        if(marked[i] == false) // i is a prime
        {
            for(int j = i * i; j<=n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }

    for(int i = 2; i<=n; i++)
    {
        if(marked[i] == false)
        cout<<i<<" ";
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    /* code */

   sieve(30);
//    isPrime(30);
    
    return 0;
}
