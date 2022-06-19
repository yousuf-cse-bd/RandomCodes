#include <iostream>
using namespace std;

class BaseClass
{
    public:
    void baseClassFn()
    {
        cout<<"Base Class Function"<<endl;
    }
};

class ChildClass : public BaseClass
{
    public:
    void childClassFn()
    {
        cout<<"Child Class Function"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */

    ChildClass ob;
    ob.baseClassFn();
    ob.childClassFn();
    return 0;
}
