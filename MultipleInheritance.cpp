#include <iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void get_a(int n)
    {
        a = n;
    }

};
class B
{
protected:
    int b;
public:
    void get_b(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        cout<<"The Value of a is: "<<a<<endl;
        cout<<"The Value of b is: "<<b<<endl;
        cout<<"Addition of "<<a<<" & "<<b<<" = "<<a+b<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    C c;
    c.get_a(10);
    c.get_b(20);
    c.display();
    return 0;
}
