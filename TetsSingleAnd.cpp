#include <iostream>
using namespace std;

int main()
{
    int bitWiseAnd = 5 & 5;
    cout<<"Bit Wise And: "<<bitWiseAnd<<endl;
    int logicalAnd = 5 && 5;
    cout<<"Logical AND: "<<logicalAnd<<endl;

    int bitWiseOr = 5 | 5;
    cout<<"Bit Wise Or: "<<bitWiseOr<<endl;
    int logicalOr = 5 || 5;
    cout<<"Logical OR: "<<logicalOr<<endl;

    int exclusiveOr = 5 ^ 5;
    cout<<"Exclusive OR: "<<exclusiveOr<<endl;

    
    return 0;
}
