#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int a = 1;
    int b = 2;

    int *const ptr = &b;
   /* ptr = &a;
    ptr = &b;*/
    printf("The value of ptr is: %d\n", *ptr);
    return 0;
}
