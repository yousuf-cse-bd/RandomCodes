/**
 * @file SieveOfEratosthenesPrimeGG.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Prime number Sieve algorithm
 * @version 0.1
 * @date 2022-06-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <cstring> // memset
#include <cmath>
using namespace std;

/*Implemenation of Sieve algorithm*/
void sieveOfEratosthenes(unsigned int n){
    /*Create a boolean array 'Prime[0...n]' and initialize all elements are as true.
     A value in prime[i] will finally be false if i is not a prime, else true.
    */
   bool prime[n+1];
   memset(prime, true, sizeof(prime)); // All item->true
   for(unsigned int p = 2; p*p <=n; p++){
    // cout<<"P = "<<p<<endl;
        // If prime[p] is not changed, then it is prime
        if(prime[p] == true){
            for(unsigned int i = p * p; i <= n; i += p){
            prime[i] = false;
            }
        }
   }
    //Print all prime numbers
    unsigned register int count = 0;  
   for(unsigned int p = 2; p<=n; p++){
        if(prime[p] == true){
            ++count;
            cout<<p<<" ";
        }
   }
   cout<<"\nThe"<<count<<" Prime Number."<<endl;
}
/*Driver Code*/
int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n = 100;
    cout<<"All prime numbers smaller or equal number of "<<n<<endl;
    sieveOfEratosthenes(n);
    return 0;
}
