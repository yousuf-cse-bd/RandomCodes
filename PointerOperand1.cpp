///When an operand is of pointer type
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    // int a = 10;
    int *ptr1 = new int(10); //for int
    cout<<"Size of ptr1: "<<sizeof(ptr1)<<endl; //8
    cout<<"Size of *ptr1: "<<sizeof(*ptr1)<<endl; //4

    char *ptr2 = new char('U');//for a char
    cout<<"Size of ptr2: "<<sizeof(ptr2)<<endl; //8
    cout<<"Size of *ptr2: "<<sizeof(*ptr2)<<endl; //1

    double *ptr3 = new double(3.1415);//for double
    cout<<"Size of ptr3: "<<sizeof(ptr3)<<endl; //8
    cout<<"Size of *ptr3: "<<sizeof(*ptr3)<<endl; //8


    return 0;
}
