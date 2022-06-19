#include <iostream>
using namespace std;

int *getArray()
{
    static int A[7];
    for(int i = 0; i<7; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }
    return A;
}

int main(int argc, char const *argv[])
{
    /* code */
    int *ptr;
    ptr = getArray();
    cout<<"\nElement that you have entered: ";
    for(int i = 0; i<7; i++)
    {
        cout<<*ptr + i<<" ";
    }
    return 0;
}
