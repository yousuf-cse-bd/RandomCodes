#include <iostream>
using namespace std;

class BaseClass
{
    int num1; //Access only this class
    public:
    void baseClassFn()
    {
        num1 = 10;
        cout<<"Base Class Function"<<endl;
    }
    void showData()
    {
        cout<<"Num1 = "<<num1<<endl;
        myPrivateMeberFunc();
    }
    private: //This private members of the base class are never inherited
    void myPrivateMeberFunc()
    {
        cout<<"This is a Private Member Function."<<endl;
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
    ob.showData();
    
    // BaseClass baseClassOb;
    // baseClassOb.showData();
    return 0;
}
