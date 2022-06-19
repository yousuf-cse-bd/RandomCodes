#include <stdio.h>

#define MAX 100

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s1[MAX];
    char sen[MAX];
    ch = getchar();
    scanf("%s", s1);
    scanf("\n%[^\n]s",sen);
    
    printf("%c\n", ch);
    printf("%s\n", s1);
    printf("%s\n", sen);

    return 0;
}