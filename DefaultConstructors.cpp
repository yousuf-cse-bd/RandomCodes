#include <iostream>
using namespace std;

class BaseClass
{
    int x;
public:
    // BaseClass(int a)
    // {
    //     cout<<"Base Class Parameterized Constructor"<<endl;
    // }
    BaseClass()
    {
        cout<<"Base Class Constructor"<<endl;
    }
};

class DerivedClass : BaseClass
{
public:
    DerivedClass()
    {
        cout<<"Derived Class Constructor"<<endl;
        // BaseClass(10);
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    DerivedClass ob1 = DerivedClass();

    return 0;
}
