#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char *s;
    s = (char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    //reallocate the memory
    s = (char*)realloc(s, strlen(s) + 1);
    // cout<<strlen(s)<<endl;
    // for(int i = 0; i<strlen(s); i++)
    // {
    //     if(s[i] != ' ')
    //     cout<<s[i];
    //     else
    //     cout<<'\n';
    // }

    

    /*This method works perfectly*/
    char *t;
    t = strtok(s, " ");
    while (t!=NULL)
    {
        printf("%s\n", t);
        t = strtok(NULL, " ");
    }
    /*for (char *c = s; *c != NULL; c++) 
    {
        if (*c == ' ') {
            *c = '\n';
        }
    }
    printf("%s", s);*/
    free(s);
    return 0;
}
