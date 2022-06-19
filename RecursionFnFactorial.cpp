#include <iostream>
using namespace std;

long long int factorial(long long int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}

int main(void)
{
    long long int n, fct;

    cout<<"Enter Nth Value Here: ";
    cin>>n;

    fct = factorial(n);

   cout<<n<<"  Factorial : "<<fct<<endl;

   return 0;
}