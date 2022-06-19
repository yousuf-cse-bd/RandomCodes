// The compiler does not know which function is needed by the user as there is no syntactical
// difference between the fun(int) and fun(int &)

#include <iostream>
using namespace std;

void func(int x)
{
    cout<<"The value of X: "<<x<<endl;
}

void func(int &b)
{
    cout<<"The value of &B: "<<b<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 21;
    func(a);
    return 0;
}
