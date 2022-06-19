#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a =90;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &a;
    *ptr1 = 7;
    // cout<<"The value of a is: "<<a<<endl;
    *ptr2 = 6;

    cout<<"The value of a is: "<<a<<endl;
    return 0;
}
