/*****
*@Author: Muhammad Yousuf Ali
*@Since: 16 March 2020
*/

#include <iostream>
using namespace std;

int fibonacci(int n)
{
   if(n <= 1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
   
   
}

int main(void)
{

    cout<<fibonacci(9)<<endl;

    return 0;
}