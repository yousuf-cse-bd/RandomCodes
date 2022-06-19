/****
 * Staircase Hacker rank
 * @Author: MuhammadYousufAli
 * @Since: 17th February 2021
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,i,j;
    cin>>n;
    for(i = 1; i<=n; i++)
    {
        for(j = n ; j>i; j--)
        {
            cout<<" ";
        }
        for(j = 1; j<=i; j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
