#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int A[5];
    int i;
    long long min,max, sum = 0;
    min = 100000000000;
    max = -1;
    for(i = 0;i<5;i++)
    {
        cin>>A[i];
        sum += A[i];

        if(A[i]<min)
        {
            min = A[i];
        }
        if(A[i]>max)
        {
            max = A[i];
        }

    }

    cout<<sum - max <<" "<<sum - min<<endl;
    return 0;
}