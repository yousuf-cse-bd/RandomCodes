// Deciding the size of the union
#include <iostream>
using namespace std;
#pragma pack(1)

union UnionSizeDecidingFromLargeVar
{
    /* data */
    int a;
    char b;
    float c ;
    double d;
}var;

struct Initialized
{
    /* data */
    int a = 44;
    char b = 'B';
    float c = 3.415;
    double d = c;
}init;


int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Size of the upon union: "<<sizeof(var)<<endl;
    var.a = 4;
    var.b = 'B';
    var.c = 3.1415;
    var.d = var.c;

    cout<<"A = "<<var.a<<endl;
    cout<<"B = "<<var.b<<endl;
    cout<<"C = "<<var.c<<endl;
    cout<<"D = "<<var.d<<endl;

    // For structure
    cout<<"Structure Size: "<<sizeof(init)<<endl;
    cout<<"A: "<<init.a<<endl;
    cout<<"B: "<<init.b<<endl;
    cout<<"C: "<<init.c<<endl;
    cout<<"D: "<<init.d<<endl;

    return 0;
}
