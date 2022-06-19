//Namespace does not support any Constructors
//Onely method

#include <iostream>
using namespace std;

namespace First
{
    void sayHello()
    {
        cout<<"Hello First Namespace."<<endl;
    }

    void myName()
    {
        cout<<"Muhmmad Yousuf Ali"<<endl;
    }
}


//Namespace most like Class but inheritance not exist

namespace Second
{
    void sayHello()
    {
        cout<<"Hello Second Namespace."<<endl;
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    First :: myName();
    First :: sayHello();

    Second :: sayHello();
    return 0;
}
