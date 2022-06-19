#include <iostream>
using namespace std;

void eliminateAnItem(int A[], int n)
{
    int index;
    cout<<"Enter Index for Remove: ";
    cin>>index;

    for(int i = index; i<n; i++)
    {
        A[i] = A[i+1];
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Nth Value Here: ";
    cin>>n;
    if(n<0)
    n = n*(-1);
    
    int A[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Index: "<<i<<"\tItem = ";
        cin>>A[i];
    }

    eliminateAnItem(A, n);

    for(int i = 0; i<n- 1; i++)
    {
        cout<<"Index: "<<i<<"\tItem = "<<A[i]<<endl;
    }
    return 0;
}
