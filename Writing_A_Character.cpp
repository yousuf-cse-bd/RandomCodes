#include <iostream>
#include <ctype.h>
using namespace std;
///Reverse Operation
int main(int argc, char const *argv[])
{
    char alphabet;
    printf("Enter an Alphabet Here: ");
    alphabet = getchar();

    if(isupper(alphabet))
    putchar(tolower(alphabet));
    else
    putchar(toupper(alphabet));

    cout<<"\nIsLower Case: "<<islower('a');
    cout<<"\nIsUpper Case: "<<isupper('A');

    return 0;
}
