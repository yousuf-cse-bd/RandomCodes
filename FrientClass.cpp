#include <iostream>
using namespace std;

class A{
// public:
    int x = 5;
    friend class B; //Friend Class
};

class B{
public:
    void display(A &a)
    {
        cout<<"Value of x: "<<a.x<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    A a;
    B b;

    b.display(a);
    return 0;
}
