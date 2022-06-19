/*****
 * @Author: Muhammad Yousuf Ali 
 * @Since: SatDay, 21 February 2020
 */

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    i = 2;
    cout<<"Enter Nth value Here: ";
    cin>>n;
    cout<<"1 + ";
    while (i<=n)
    {
        cout<<"1/"<<i<<" + ";
        if(i==n)
        cout<<"1/"<<i<<endl;
        i++;
    }
    
    return 0;
}