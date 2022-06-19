#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,i,j;

    cout<<"Enter A Positive Number Here: ";
    cin>>n;

    if(n % 2 == 1)
    {
        cout<<"Enter The Even Number...!"<<endl;
    } 
    else
    {
        for(i = 1; i<=n ;i++)
        {
            for(j = 1 ; j<= n ; j++)
            {
               if(i == j || i+j == n || i == n/2 || j == n /2)
               {
                   cout<<"*";
               }
               else
               {
                   cout<<" ";
               }
            }
            cout<<endl;
        }
    }
    return 0;
}
