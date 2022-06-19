//Hybrid Inheritance in C++
#include <iostream>
using namespace std;

class A
{   
    protected:
    int a;
    public:
    void get_a()
    {
        cout<<"Eentr the value of 'a': ";
        cin>>a;
    }

};

class B : public A
{
protected:
    int b;
public:
    void get_b()
    {
        cout<<"Enter the value of 'b': ";
        cin>>b;
    }

};

class C
{
protected:
    int c;
public:
    void get_c()
    {
        cout<<"Enter the value of 'c': ";
        cin>>c;
    }
};

class D : public B, public C
{
protected:
    int d;
public:
    void mult()
    {
        get_a();
        get_b();
        get_c();

        cout<<"Multiplication: "<<a*b*c<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    D ob;
    ob.mult();
    return 0;
}
