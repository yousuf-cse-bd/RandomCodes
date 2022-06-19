#include <iostream>
using namespace std;

class TestClass
{
    bool myObserve;
    bool urAns;
    public:
    TestClass(bool b1, bool b2)
    {
        myObserve = b1;
        urAns = b2;
    }
    ~TestClass()
    {
        if(myObserve == urAns)
        {
            cout<<"I had the consept"<<endl;
        }
        else
        {
            cout<<"As Your Wish"<<endl;
        }
    }

};

int main(int argc, char const *argv[])
{
    bool myObserve = false;
    bool urAns = false;
    TestClass ob(myObserve, urAns);
    return 0;
}
