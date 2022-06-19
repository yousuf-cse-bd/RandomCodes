#include <iostream>
using namespace std;

void swap1(int &a, int &b) // call by refference
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
void swap2(int* x, int * y) // call by refference using pointer
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
int main(int argc, char const *argv[])
{
    /* code */

    int a, b;
    a = 10, b = 25;
    swap1(a, b);

    cout<<a<<"\t"<<b<<endl;

    int x = 35;
    int y = 99;
    swap2(&x , &y);
    cout<<"x = "<<x<<"\ty = "<<y<<endl;
    // swap2(&a, &b);
    // cout<<a<<"\t"<<b<<endl;
    return 0;
}
