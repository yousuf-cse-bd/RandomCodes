#include <iostream>
using namespace std;

#pragma pack(1)

union UnionSharedMemoryLocation
{
    /* data */
    int a;
    char b;
}u1;

struct StructureNotSharedMemoryLocation
{
    /* data */
    int a;
    char b;
}s1;



int main(int argc, char const *argv[])
{
    /* code */
    cout<<"Union: "<<sizeof(u1)<<endl;
    cout<<"Strcuture: "<<sizeof(s1)<<endl;

    // for union
    cout<<"For Union"<<endl;
    
    u1.a = 97;
    cout<<"Memory Location of a: "<<&u1.a<<endl;
    cout<<"Memory Location of b: "<<&u1.b<<endl;
    printf("a = %d\n", u1.a);
    printf("b = %c\n", u1.b);

    // for structure
    cout<<"\nFor Structure"<<endl;
    s1.a = 97;
    cout<<"Memory Location of a: "<<&s1.a<<endl;
    cout<<"Memory Location of b: "<<&s1.b<<endl;
    printf("a = %d\n", s1.a);
    printf("b = %c\n", s1.b);


    return 0;
}

