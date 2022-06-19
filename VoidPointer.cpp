//Void Pointer
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    void *ptr; //declare void pointer
    float pi = 3.1415; //declare fload data type a pi value

    //Assign the value on the pointer variable
    ptr = &pi;

    cout<<"Addess of PI: "<<ptr<<endl;
    cout<<"Addess of PI: "<<&pi<<endl;

    return 0;
}
