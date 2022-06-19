#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    // char string[] = "Tech CSE Tutorials";
    // printf("%d\n", strlen(string));
    char *p = "Tech CSE Tutorials";
    printf("%s\n", p);

    // Mulliple String
    char* multName[3] = {"Muhammad", "Yousuf", "Ali"};
    for(int i = 0; i<3; i++)
    {
        printf("%s ", multName[i]);
    }
    printf("\n");

    char ch1[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
    printf("%d\n", strlen(ch1));

    char ch2[]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'}; 
    printf("%d\n", strlen(ch2));

    char ch3[]="javatpoint"; 
    printf("%d\n", strlen(ch3));

    // char fullName[20];

    // printf("Enter Your Name: ");
    // scanf("%[^\n]s", fullName);
    // // scanf("%[^\n]*c", fullName);
    // printf("Your Name: %s", fullName);

    // printf("\n%d", strlen(fullName));

    // char name[] = "a v";
    // printf("\n%d\n", strlen(name));

    return 0;
}
