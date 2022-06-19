#include <stdio.h>

int main(int argc, char const *argv[])
{
    char colors[4][10];

    for(int i = 0; i<4; i++)
    {
        printf("Enter Your Value Here: ");
        scanf("%s", &colors[i]);
    }

    for(int i = 0 ; i<4 ; i++)
    {
        printf("%s ", colors[i]);
    }
    return 0;
}
