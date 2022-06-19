#include <iostream>
using namespace std;

namespace First{
    void sayHellow()
    {
        cout<<"Say Hellow First Namespace"<<endl;
    }
}

namespace Second
{
    void sayHellow1()
    {
        cout<<"Say Hellow Second Namespace"<<endl;
    }
}
//At a time one namespace calling not one more.
//couse of it will error throgh
using namespace First;
// using namespace Second;
int main(int argc, char const *argv[])
{
    /* code */

    sayHellow();
    // sayHellow1();
    return 0;
}
