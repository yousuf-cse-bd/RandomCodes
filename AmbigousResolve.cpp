#include <iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"It is ClassA"<<endl;
    }
};

class B
{
    public:
    void display()
    {
        cout<<"It is ClassB"<<endl;
    }
};

class DerivedC : public A, private B
{
    public:
    void view()
    {
        A :: display();
        B :: display();
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    DerivedC c;
    // c.A :: display(); 
    c.view();
    return 0;
}
