#include <iostream>
using namespace std;

class SuperClass
{
    public:
    void fnOverriding()
    {
        cout<<"Function Overrid 1"<<endl;
    }
};

class SubClass : SuperClass
{
    public:
    void fnOverriding()
    {
        cout<<"Function Overrid 2"<<endl;
    }
};

int main()
{
    SubClass ob = SubClass();

    ob.fnOverriding();
    ob.fnOverriding();
    return 0;
}