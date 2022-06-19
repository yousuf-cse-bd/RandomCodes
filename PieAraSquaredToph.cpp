#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.141592653589793

int main(int argc, char const *argv[])
{
    /* code */
    // double pi = acos(-1);
    float r;
    cin>>r;

    double A = pi * pow(r, 2.0);
    printf("%0.10lf", A);
    return 0;
}
