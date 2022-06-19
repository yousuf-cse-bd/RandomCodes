#include <iostream>
#define PRINT printf("c"); printf("C++");
using namespace std;

// compiler error
int main(int argc, char const *argv[])
{
    /* code */

    float a = 5.5;
    if(a == 5.5)
    // printf("Equal\n");
    PRINT
    else
    printf("Not Equal\n"); 
    return 0;
}
