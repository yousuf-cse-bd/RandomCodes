#include <iostream>
using namespace std;

#define MAX 2000
int multiply(int x, int res[], int resSize);
void factorial(int n)
{
    int res[MAX];
    // first index initialize by 1
    res[0] = 1;
    //new size of the array
    int resSize = 1;

    for(int x = 2; x<=n; x++)
    {
        resSize = multiply(x, res, resSize);
    }

    // The expected factorial value
    if(resSize>4)
    {
        for(int i = 3; i>=0; i--)
        {
            cout<<res[i];
        }
    }
    else
    {
        for(int i = resSize - 1; i>=0; i--)
        {
            cout<<res[i];
        }
    }

}

int multiply(int x, int res[], int resSize)
{   
    // Initialize the carry is zero
    int carry = 0;
    // One by One multiply n with individual digits of res[]
    for(int i = 0; i<resSize; i++)
    {
        int product = res[i] * x + carry;
        // Store the last digit of product to in res[i]
        res[i] = product % 10;
        // And put rest value to in carry
        carry = product / 10;
    }

    // Put carry in res and reSize value increase by  one
    while(carry != 0)
    {
        res[resSize] = carry % 10;
        carry = carry / 10;
        resSize ++;
    }

    return resSize;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
