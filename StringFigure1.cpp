#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char string[] = "CProgramming";
    int c, d, l;
    l = strlen(string);
    
    for(c = 0; string[c] != '\0'; c++)
    {
        d = c + 1;
        printf("|%-12.*s|\n", d, string);
    }
    cout<<"|------------|\n";
    for(c = l-1; c>=0; c--)
    {
        d = c + 1;
        printf("|%-12.*s|\n", d, string);
    }

    return 0;
}
