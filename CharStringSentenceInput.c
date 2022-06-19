#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char ch;
    char s1[MAX];
    char sen[MAX];
    printf("Enter Single Char: ");
    // ch = getchar(); // Valid
    scanf("%c", &ch);
    printf("Enter Single Word: ");
    scanf("%s", s1);
    printf("Enter Multiple Words: ");
    scanf("\n%[^\n]s",sen);
    
    printf("\nSingle Char: %c\n", ch);
    printf("Single Word: %s\n", s1);
    printf("Multiple Words: %s\n", sen);
    return 0;
}