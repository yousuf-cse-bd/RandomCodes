// How to avoid the structure padding in C?
// 1. Using #pragma pack(1) directive
// 2. Using attribiue

#include <iostream>
using namespace std;
#pragma pack(1)
// using #pragma pack(1)
struct AvoidTheStrucuturePaddingC1
{
    /* data */
    int a; // 4 bytes
    char b; // 1 byte
    double c; // 8 bytes
};

int main(int argc, char const *argv[])
{
    /* code */
    AvoidTheStrucuturePaddingC1 var1;
    cout<<sizeof(var1)<<endl;
    return 0;
}


