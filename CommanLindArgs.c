#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    printf("Program Name is: %s\n", argv[0]);
    if(argc < 2)
    printf("No Argumnet Passed Through Command Line...\n");
    else
    printf("First Argument is: %s\n", argv[1]);
    return 0;
}
