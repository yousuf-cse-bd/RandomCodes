#include <iostream>
#include <malloc.h>
using namespace std;

int *getArray()
{
    // int size;
    // cout<<"Enter size of the array: ";
    // cin>>size;

    int size = 10;
    int *p =(int*) malloc(size* sizeof(int));

    /*Equal!!!*/
    // int *q = (int*) malloc(sizeof(size));

    // if(*p == *q)
    // cout<<"Equal!"<<endl;
    // else
    // cout<<"!Equal"<<endl;

    for(int i = 0; i<size; i++)
    {
        cout<<"P["<<i<<"] = ";
        cin>>p[i];
    }
    return p;
}

int main(int argc, char const *argv[])
{
    /* code */

    int *ptr;
    ptr = getArray();
    int length = sizeof(*ptr);
    cout<<"Length of *ptr: "<<length<<endl;
    cout<<"Elements that you have enetred are: ";
    for(int i = 0; ptr[i] != '\0'; i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}
