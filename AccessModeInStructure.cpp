#include <iostream>
using namespace std;

struct AccessMode
{
    private:
    int a;
    public:
    int b;

    void setA(int a)
    {
        this->a = a;
    }
    int getA()
    {
        return a;
    }
    /* data */
};

struct Child : AccessMode
{
    /* data */

    Child()
    {
        cout<<"Child Constructor."<<endl;
    }

};


int main(int argc, char const *argv[])
{
    /* code */

    AccessMode ac;
    ac.b = 10;
    cout<<"B = "<<ac.b<<endl;

    ac.setA(ac.b + 10);
    cout<<"Get the value, A: "<<ac.getA()<<endl;

    Child child;
    child.b = 100;
    child.setA(child.b + 100);
    cout<<"Child getA : "<<child.getA()<<endl;

    return 0;
}

