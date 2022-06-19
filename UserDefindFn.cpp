#include <iostream>
using namespace std;

void inPut()
{
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int A[n];
    int i;
    for(i = 0; i <n ; i++)
    {
        cin>>A[i];
    }
    outPut(A,n);
}

void outPut(int A[],int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
    inPut();
    return 0;
}