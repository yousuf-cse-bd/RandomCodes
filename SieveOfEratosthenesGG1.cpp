/*****
 * C++ Program to print all primes smaller than or equal to n
 * using Sieve of Eratosthenes
 */

#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Creatr a boolean Array
    // "Prime[0..n]" ans initialize
    // all entries it as true.
    // A value in prime[i] will 
    // finaly be false if i is 
    // not prime, else true.

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p * p<=n ;p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if(prime[p] == true)
        {
            // Update all multiplies
            // of p greater than or equal to the square of it
            // number which are multiple 
            // of p and are less than p^2 
            // are already been marked

            for(int i = p * p ; i<=n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    
    // Print all prime numbers
    for(int p = 2; p<= n; p++)
    {
        if(prime[p]) // true
        cout<<p<<" ";
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 30;
    cout<<"Following are the prime numbers smaller "
    <<" than or equal to "<<n<<endl;
    SieveOfEratosthenes(n);

    return 0;
}
