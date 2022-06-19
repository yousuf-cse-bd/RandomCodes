/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Thuesday, 29 August 2019
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int testCase;
    float a,b,c,area, s;

    cout<<"Enter Test Case Here: ";
    cin>>testCase;

    while(testCase>0)
    {
        cout<<"Enter A,B,C :";
        cin>>a>>b>>c;
    
        s = (a + b + c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%0.2f\n",area);
        
       
        --testCase;
    }
    return 0;
}
