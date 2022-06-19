// Accessing members of union using pointers

#include <iostream>
using namespace std;

union UnionMembersAccessingByPointer
{
    /* data */
    int a;
    char b;
};


int main(int argc, char const *argv[])
{
    union UnionMembersAccessingByPointer *ptr;
    union UnionMembersAccessingByPointer var;
    
    var.a = 90;
    ptr = &var;
    printf("The value of a is: %d\n", ptr->a);
    printf("The value of a is: %c\n", ptr->b);
    
    return 0;
}
