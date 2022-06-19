#include <iostream>
using namespace std;

class Inheritance
{
    public:
    void memberFn()
    {
       cout<<"Just a Messege" <<endl;
    }
};

int main()
{
    Inheritance ob = Inheritance();
    ob.memberFn();

    return 0;
}