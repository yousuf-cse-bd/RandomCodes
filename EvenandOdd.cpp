/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 31 July 2019
 */

#include <iostream>
using namespace std;

void evenSort(int A[],int n)
{
    int i,j,item;
    for ( i = 0; i < n; i++)
    {
        cout<<i<<" = "<<A[i]<<endl;
    }
        
}
void oddSort(int n, int size)
{
   int i,j,item; 
}

int main(int argc, char const *argv[])
{
    int test, increment, num, size = 0;

    cout<<"Enter Nth Here: ";
    cin>>test;
    increment = 1;
    int A[test];
    while(increment<=test)
    {
        cin>>num;
        if(num % 2 == 0)
        {
            
            A[increment] = num;
            cout<<"E["<<increment<<"] = "<<A[increment]<<"\n";
            size ++;
        }
        else
        {
            A[increment] = num;
            cout<<"O["<<increment<<"] = "<<A[increment]<<"\n";
        }
        
        increment++;
    }

    return 0;
}
