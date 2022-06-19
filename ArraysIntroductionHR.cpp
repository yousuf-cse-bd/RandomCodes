//Arrays Introduction Reverse Order

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int arraySize;
    cin>>arraySize;

    int A[arraySize];
    for(int i = 0; i<arraySize; i++)
    {
        cin>>A[i];
    }

    for(int i = arraySize - 1; i>=0; i--)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}
