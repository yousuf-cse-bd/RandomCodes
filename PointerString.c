#include  <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */

    char *name = "\nMuhammadYousufALiTushar";
    puts(name);

    char *myString [5] = {
        "Bangladesh",
        "Pakistan",
        "India",
        "Nepal",
        "Bhutan"
    };

    int count = 0;
    // Just Output
    printf("\nUsing Nasted Loop\n");
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; myString[i][j] != '\0'; j++)
        {
            ++count;
            printf("%c", myString[i][j]);
        }
        printf("\n");

        // printf("%d\n", count);
        // count = 0;
    }
    return 0;
}
