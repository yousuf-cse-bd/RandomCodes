#include <iostream>
using namespace std;

void reassignmentRefernce()
{
    int x = 11; // variable initiliazation
    int z = 67; // variable initiliazation

    int &y = x; //y reference to x;
    // &y = z;// y reference to z, but throws a compile-time error.

    cout<<"&Y = "<<y<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    int a = 10; //variable initialization
    // int a = 20; // compile time error
    int &b = a; //b reference to a

    cout<<"The Value of a is "<<b<<endl;

    reassignmentRefernce();

    return 0;
}
