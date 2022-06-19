#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int A[5]; //integer array declaration
    int *ptr[5]; // integer pointer declaration

    for(int i = 0; i<5; i++)
    {
        A[i] = i+10;
        ptr[i] = &A[i];
    }

    cout<<"All Items Here Array A: ";
    for(int x: A)
    {
        cout<<x<<" ";
    }
    //Printing the value using pointer
    cout<<"\nThe value are: ";
    for(int i = 0; i<5; i++){
        cout<<*ptr[i]<<" ";
    }

    cout<<endl;

    int *p;
    p = A;
    cout<<"Using another pointer:"<<endl;
    for(int i = 0; i<5;i++){
        cout<<*p+i<<" ";
    }
    


    //forEach pointer loop 
    // for(int *ptr1 : ptr[])
    // cout<<*ptr<<endl;

    //forEachLoop deos not support pointer variables
    cout<<endl;

    return 0;
}
