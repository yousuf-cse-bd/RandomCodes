#include <iostream>
using namespace std;

class A
{
    public:
    void classA();
    
};
void A::classA() ///using scope resulation operator :: 
{
    cout<<"Class A"<<endl;
}

class B : public A
{
    public:
    void classB();
    
};

void B::classB() ///out of deffinition in function of class
{
    cout<<"Class B"<<endl;
}

class C : public B
{
    public:
    void classC();
};
void C::classC()
{
    cout<<"Class C"<<endl;
}

int main()
{

    C c = C();
    c.classA();
    c.classB();
    c.classC();

    return 0;
}