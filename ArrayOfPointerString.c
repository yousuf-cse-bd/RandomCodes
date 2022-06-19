///ArrayOfPointerString
//Manipulation 2D array using pointer
#include <stdio.h>

int main()
{
    /* code */
    //declare 2dD array
    char *names[] = {"John", "Peter", "Marco", "Devin", "Ronan"};
    int size = sizeof(names) / sizeof(names[0]);
    printf("Size of Array: %d\n", size);

    // //output using forEachLoop
    // for( char *n : &names)
    // {
        // forEachLoop does not support
    //     printf("%s", n*);
    // }

    // Output using additional loop
    for(int i = 0; i<size; i++)
    {
        printf("%s\n", names[i]);
    }

    
    return 0;
}
