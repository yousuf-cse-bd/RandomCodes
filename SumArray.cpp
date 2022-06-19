#include <iostream>
using namespace std;

int main(void)
{

    int n,sum,i;
    cout<<"Enter Nth Value Here: ";
    cin>>n;

    int A[n];
    for(i = 0; i<n;i++)
    {
        cout<<i<<": ";
        cin>>A[i];
    }

    sum = 0;
    i = 0;
    while(i<n)
    {

        sum = sum + A[i];
        cout<<"Sum of each other: "<<sum<<endl;
        i++;
    }
    return 0;
}
