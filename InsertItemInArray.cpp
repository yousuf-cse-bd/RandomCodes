#include <iostream>
using namespace std;

void insertItemInArray(int A[], int n)
{
   cout<<"Enter Index Where Inserting: ";
   int index, item;
   cin>>index;
   for(int i = n; i>=index; i--)
   {
       A[i+1] = A[i];
   }
   cout<<"Enter thw New Item: ";
   cin>>item;
   A[index] = item;

   for(int i = 0; i<=n; i++)
   {
       cout<<"Index: "<<i<<"\tItem = "<<A[i]<<endl;
   }
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter Nth Value Here: ";
    cin>>n;
    int A[n+1];
    for(int i = 0; i<n ;i++)
    {
        cout<<"Index: "<<i<<"\tItem = ";
        cin>>A[i];
    }

   insertItemInArray(A, n);


    return 0;
}
