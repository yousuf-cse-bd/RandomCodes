#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned bn, dec, lastDigit, base, power;
    bn = 1011; //dec = 11
    dec = 0;
    power = 0;

    while (bn != 0)
    {
        lastDigit = bn % 10;
        base = pow(2, power++);
        dec += lastDigit * base;
        bn = bn / 10;
    }
    cout<<"Decimal Number: "<<dec<<endl;
    
    return 0;
}
