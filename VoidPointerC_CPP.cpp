#include <iostream>
using namespace std;

void voidPointerInCpp()
{
    void *voidPointer;// void pointer declaration
    int *intPointer;// integer pointer declaration
    int a = 10; //integer variable initialization
    voidPointer = &a;//storing the address of 'a' in voidPonter
    //not valid in C++
    // intPointer = voidPointer;// assigning void pointer to integer type

    //Valid only using TypeCasting

    intPointer = (int *)voidPointer;//using typecasting method
    cout<<"The value of *intPointer: "<<*intPointer<<endl;

}

int main(int argc, char const *argv[])
{
    /* code */
    voidPointerInCpp();
    return 0;
}
