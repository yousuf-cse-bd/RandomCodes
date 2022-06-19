/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Monday, 2 / 08/ 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testCase;
    long num1,num2,rem;

    cout<<"Enter TestCase Here: ";
    cin>>testCase;
    while (testCase>0)
    {
        cout<<"Enter 2 Posiive vale:"<<endl;
        cin>>num1>>num2;

        while (num2 != 0)
        {
            rem = num1 % num2;
            num1 = num2;
            num2 = rem;
        }
        cout<<num1<<endl;
        testCase--;
    }
    
   
    
    return 0;
}
