#include <iostream>
using namespace std;

struct StructurePaddingInC1
{
    /* data */
    char a;
    char b;
    int c;
}padding1;

// Changing the order
struct StructurePaddingInC2
{
    /* data */
    char a;
    int c;
    char b;
}padding2;


int main(int argc, char const *argv[])
{
    /* code */
    cout<<sizeof(padding1)<<endl;
    cout<<sizeof(padding2)<<endl;
    return 0;
}
