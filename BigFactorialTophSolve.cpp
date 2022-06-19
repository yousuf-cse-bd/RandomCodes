#include <iostream>
using namespace std;

void fact(int n)
{
    int a[2000], temp, c, i;
    a[0] = 1;
    c = 0;
    // n == given nth value loop runs decrease order
    for(; n>=2; n--)
    {
        temp = 0;
        for(i = 0; i<=c; i++)
        {
            temp += (a[i] * n);
            a[i] = temp % 10; // store the last digits to i the array A[]
            temp = temp / 10; // carry to store temp
        }

        // put carry in the array a[] and incrase c's value
        while (temp > 0)
        {
            a[++c] = temp % 10;
            temp /= 10;
        }
        
    }

    if(c>=3)
    {
        for(i = 3; i>=0; i--)
        cout<<a[i];
    }
    else
    {
        for(i = c; i>=0; i--)
        cout<<a[i];
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    fact(10);
    return 0;
}
