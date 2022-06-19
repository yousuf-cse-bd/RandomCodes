#include <iostream>
using namespace std;

// By using attribiute packed

struct AvoidTheStrucuturePaddingC2
{
    /* data */
    int a; // 4 bytes
    char b; // 1 byte
    double c; // 8 bytes
}__attribute__((packed));  ; 


int main(int argc, char const *argv[])
{
    /* code */
    AvoidTheStrucuturePaddingC2 var2;
    cout<<"Size of: "<<sizeof(var2);
    return 0;
}
