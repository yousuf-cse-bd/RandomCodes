#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    /* code */
    char line[81], ctr;
    int i,c,
        end = 0,
        character = 0,
        words = 0,
        lines = 0;

    printf("Key In The Text.\n");
    printf("Give One Space After Each Word.\n");
    printf("When Completed, Press 'Return'\n\n");
    while (1)
    {
        ++end;
        if(end == 5)
        break;
        /* Reading a line of text */
        c = 0;
        while((ctr = getchar()) != '\0')
            line[c++] = ctr;
        line[c] = '\0';

        /* Counting the words in a line */
        if(line[0] == '\0')
        break;
        else
        {
            words++;
            for(i = 0; line[i] != '\0'; i++){
                if(line[i] == ' ' || line[i] == '\t'){
                    words++;
                }
            }        
        }
        /*Counting lines and character */
        lines = lines + 1;
        character = character + strlen(line);
    }
    printf("\n");
    printf("Number of Lines: %d\n", lines);
    printf("Number of Words: %d\n", words);
    printf("Number of Character: %d\n", character);
    

    return 0;
}
