#include <iostream>
using namespace std;

int main(void)
{
    int n,i;
    cout<<"Enter Nth Here: ";
    cin>>n;
    int A[n];

    for(i = 0; i<n;i++)
    {
        cout<<"["<<i<<"] = ";
        cin>>A[i];
    }

    i = 0;
    while(i<n)
    {
        if(A[i] % 2 == 0)
        {
            cout<<"Even = "<<A[i]<<endl;
        }
        else
        {
            cout<<"Odd = "<<A[i]<<endl;
        }
        i++;
    }
    return 0;
}
