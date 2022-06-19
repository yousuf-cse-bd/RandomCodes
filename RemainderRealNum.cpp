#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float num = 9.22;
    num = fmod(num, 3);

    cout<<num<<endl;
    return 0;
}