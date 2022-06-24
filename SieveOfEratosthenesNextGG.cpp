/**
 * @file SieveOfEratosthenesNextGG.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*C++ program to print all prime smaller than or equal to n using Sieve Eratosthnes*/
/*The following imeplemenation stores only halves pf add numbers
the algorihm is a faster by some constan facotor*/
#include <iostream>
#include <bitset>
using namespace std;

bitset <500001> primes;
void sieveErotosthenes(unsigned int n){
    primes[0] = 1;
    for(unsigned int i = 3; i*i <= n; i = i + 2){
        // cout<<i<<" ";
        if(primes[i / 2] == 0){
            for(unsigned int j = 3 * i; j<=n; j = j + (2 * i)){
                primes[j / 2] = 1;
            }
        }
        // cout<<endl;
    }
}

/*Driver Code*/
int main(int argc, char const *argv[])
{
    /* code */
    unsigned int n = 100;
    sieveErotosthenes(n);
    unsigned int register count = 0;
    for(int i = 0; i<=n ;i++){
        if(i == 2){
            cout<<i<<" ";
            ++count;
        }
        else if(i % 2 == 1 && primes[i / 2] == 0){
            cout<<i<<" ";
            ++count;
        }
    }

    cout<<"\nThe "<<count<<" Prime Numbers."<<endl;

    return 0;
}



