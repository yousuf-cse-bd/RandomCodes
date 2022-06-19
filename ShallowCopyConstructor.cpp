// SHALLOW COPY CONSTRUCTOR
// 1. The default copy constructor can only produce the shallow copy.
// 2. A Shallow copy is defined as the process of creating the copy of an object by copying 
// data of all the member variables as it is.

#include <iostream>
using namespace std;

class Demo
{
    int a, b;
    int *ptr;

public:
    Demo()
    {
        ptr = new int;
    }
    void setData(int x, int y, int z)
    {
        a = x, b = y, *ptr = z;
    }

    void showData()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of *ptr is "<<*ptr<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Demo d1;
    d1.setData(4, 5 , 7);
    Demo d2 = d1;
    d2.showData();
    return 0;
}
