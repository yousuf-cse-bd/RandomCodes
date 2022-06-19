#include <iostream>
using namespace std;

unsigned binary2Decimal(int bn)
{
    unsigned decimal = 0;
    unsigned bBase = 1;
    unsigned lastDigit;

    while (bn != 0)
    {
        lastDigit = bn % 10;
        decimal = decimal + (lastDigit * bBase);
        bBase *= 2;
        bn = bn / 10;
    }
    return decimal;
}

int main(int argc, char const *argv[])
{
    unsigned binaryNumber;
    cout << "Enter Binary Number Here: ";
    cin >> binaryNumber;

    cout<<"Decimal Number: " << binary2Decimal(binaryNumber) << endl;
    return 0;
}
