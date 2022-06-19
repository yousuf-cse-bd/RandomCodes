/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Thuesday, 29 August 2019
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testCase,num;
    cout<<"Enter Test Case: ";
    cin>>testCase;
    while (testCase>0)
    {
        cout<<"Enter Value: ";
        cin>>num;

        if(num % 2 == 0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
        testCase --;
        
    }
    
    return 0;
}
