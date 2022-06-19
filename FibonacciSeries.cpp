/*****
*@Author: Muhammad Yousuf Ali
*@Since: 16 March 2020
*/

#include <iostream>
using namespace std;

int main(void)
{
    int num1,num2,num3;
    num1 = 0;
    num2 = 1;

    cout<<num1<<" "<<num2;
    for(int i = 2 ; i<10;i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout<<" "<<num3;
    }
    cout<<endl;

    return 0;
}