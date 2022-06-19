/*****
*@Author: Muhammad Yousuf Ali
*@Since: 16 March 2020
*/
#include <iostream>
using namespace std;

int fibonacci(int n)
{
   if(n <= 1)
   {
       return n;
   }
   else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
    
}

int main(void)
{
    int i, n;
    cout<<"Enter Nth value Here: ";
    cin>>n;

    for(i = 0 ; i<n;i++)
    {
       cout<<fibonacci(i)<<" ";
    }
    cout<<endl;

    return 0;
}