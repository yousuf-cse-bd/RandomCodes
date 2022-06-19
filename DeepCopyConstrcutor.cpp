#include <iostream>
using namespace std;

class Demo
{
public:
    int a, b;
    int *p;

    Demo()
    {
        p = new int;
    }
    Demo(Demo &d)
    {
        a = d.a;
        b = d.b;
        p = new int;
        *p = *(d.p);
    }

    void setData(int x, int y, int z)
    {
        a = x, b = y, *p = z;
    }

    void showData()
    {
        cout<<"The Value of A is "<<a<<endl;
        cout<<"The Value of B is "<<b<<endl;
        cout<<"The Value of *P is "<<*p<<endl;
    }
    ~Demo(){
        delete p;
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
