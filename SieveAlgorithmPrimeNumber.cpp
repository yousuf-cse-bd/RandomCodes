/**
 * @file SieveAlgorithmPrimeNumber.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring> //memset(arrayVar, value, size);
using namespace std;
#define MAX_SIZE 10000
bool marked[MAX_SIZE]; // by deafult all items = false

// bool isPrime(int n)
// {
//     if(n < 2) return false;
//     if(n % 2 == 0) return false;
//     if(n == 2) return true;
//     return marked[n] == false;
// }

void sieveAlgorithm(unsigned int n){
    memset(marked, false, MAX_SIZE); // again all items -> false
    for(unsigned int i = 2; i*i<=n; i++){
        if(marked[i] == false) // i is a prime
        {
            for(unsigned int j = i * i; j<=n; j = j + i)
            {
                marked[j] = true;
            }
        }
    }

    unsigned register int count = 0;
    for(int i = 2; i<=n; i++){
        if(marked[i] == false){
            cout<<i<<" ";
            ++count;
        }
    }
    cout<<"\nThe "<<count<<" Prime Numbers."<<endl;
}


int main(int argc, char const *argv[])
{
    /* code */

   sieveAlgorithm(100);
//    isPrime(30);
    
    return 0;
}
