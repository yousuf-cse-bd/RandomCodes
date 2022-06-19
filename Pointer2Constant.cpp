#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 10;
    int b = 20;

    const int * ptr;

    ptr = &a;
    ptr = &b;

    printf("Value of ptr is :%u\n", ptr); //it is addess of b variable
    return 0;
}
