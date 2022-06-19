#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 10;
    int b = 90;

    const int * const ptr = &a;
    // *ptr  = 12;
    // ptr = &b;

    printf("Value of ptr is :%d",*ptr);
    return 0;
}

/*The above code shows the error "assignment of read-only location '*ptr'" 
and "assignment of read-only variable 'ptr'".
Therefore, we conclude that the constant pointer to a 
constant can change neither address nor value, which is
pointing by this pointer.*/