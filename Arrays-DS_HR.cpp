#include <iostream>
using namespace std;

// Reverse print array elements
int main(int argc, char const *argv[])
{
    int n, i;
    cin>>n;
    int A[n];
    // input all elements into the array
    for(i = 0; i<n ;i++)
    {
        cin>>A[i];
    }
    // reverse print the array element using reverse order loop
    for(i = n -1 ;i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
