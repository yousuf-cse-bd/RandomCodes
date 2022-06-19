#include <iostream>
using namespace std;
// ??????????
int main(int argc, char const *argv[])
{
    /* code */
    int x = 4;
    cout<<"x = "<<x<<endl;
    int y;
    cout<<"y = "<<y<<endl;
    int *ptr;
    ptr = &x;
    cout<<"ptr = "<<ptr<<endl;
    y = *ptr;
    cout<<"y = "<<y<<endl;
    *ptr = 5;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"The value of x: "<<x<<endl;
    cout<<"The value of y: "<<y<<endl;

    return 0;
}
