#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */

    int n, *ptr, sum = 0; //delared all variable
    printf("Enter Number of Elements: "); //user message
    scanf("%d", &n); //input nth value

    //malloc(single parameter) function
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Sorry! unable to allocate memory.");
        exit(0);
        // return 0;
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d\t = ", i);
        scanf("%d", ptr + i);

        sum = sum + *(ptr + i);//syntax for malloc value
    }

    printf("Sum of: %d\n ", sum);

    free(ptr);

    return 0;
}


