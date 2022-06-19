/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 *  Digit: ArmstrongNumber 
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    cout<<"GCD: "<<__gcd(180, 168)<<endl;
    int orginalNumber, number, remainder, sum = 0, count = 0;

    for (orginalNumber = 1;orginalNumber<=153;orginalNumber++)
    {
        number = orginalNumber;
        ///logic
        while (number!=0)
        {
        remainder = number % 10;
        number = number / 10;
        sum = sum + (remainder*remainder*remainder);
        remainder = number;
        }
        // cout<<number<<" = Sum : "<<sum<<endl;
        if(orginalNumber == sum)
        {
            cout<<orginalNumber<<" is an Armstrong Number."<<endl;
            cout<<++count<<endl;
        }
        // else
        // {
        //     cout<<orginalNumber<<" is not an Armstrong Number."<<endl;
        // }
        sum = 0;
    }
    
    
    
    
    return 0;
}
