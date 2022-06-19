#include <iostream>
// #include <conio.h>
// #include <stdio.h>
using namespace std;

#define NOINPUT
// #undef NOINPUT
// But, if you don't define / undef NOINPUT, 
// it will ask user to enter a number.
int main(int argc, char const *argv[])
{
    /* code */
    int a = 0;
    #ifdef NOINPUT
    a = 2;
    #else
    cout<<"Enter a: ";
    cin>>a;
    #endif
    cout<<"Value of a: "<<a<<endl;
    return 0;
}
