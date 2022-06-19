#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int *num = NULL;

    // cout<<"NULL = "<<*num<<endl;
    if(num)
    cout<<"That is NULL"<<endl;
    else
    cout<<"That is not NULL "<< num<<endl;

    //Again

    int a = 10;
    if(a)
    cout<<"Here is "<<a<<endl;
    else
    cout<<"Here is not "<<a<<endl; 

    //java tuterial point
    int *ptr1 = NULL;
    int *ptr2;
    int x = 9;
    ptr2 = &x;

    if(ptr1)
    cout<<"Pointer is not Null: "<<ptr1<<endl;
    else
    cout<<"Pointer is null: "<<ptr1<<endl;
    // free(ptr1);
    delete ptr1;

    return 0;
}
