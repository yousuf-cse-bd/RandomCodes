#include <stdio.h>

int main(void)
{
    size_t i; // size_t == int
    // printf("%d\n", sizeof(i));
    for ( i = 0; i < 256; i++)
    {
        printf("%d = %c\n",i, i);
    }

    return 0;
}
