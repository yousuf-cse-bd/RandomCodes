#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    // Write your code here.

    int maxAnd, maxOr, maxXor;
    maxAnd = maxOr = maxXor = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j = i + 1; j<=n ; j++)
        {
            if(maxAnd < (i & j) && (i&j) < k)
            maxAnd = i & j;
            if(maxOr < (i | j) && (i|j) < k)
            maxOr = i | j;
            if(maxXor < (i ^ j) && (i^j) < k)
            maxXor = i ^ j;
            // cout<<"I = "<<i<<"\t\t"<<"j = "<<j<<endl;
        }
    }

    cout<<maxAnd<<"\n"<<maxOr<<"\n"<<maxXor<<endl;
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}