#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    const char *colors[4] = {"Red", "Blue", "Green", "Black"};
    for(int i = 0; i<4; i++)
    {
        printf("%s ", colors[i]);
    }

    char const *name = "MuhammadYousufAli";
    printf("\n");
    for(int i = 0; i!=17; i++)
    {
        printf("%c ", name[i]);
    }
    return 0;
}
