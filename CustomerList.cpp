#include <iostream>
#include <cstring>
using namespace std;

#define CUSTOMER 10

int main(int argc, char const *argv[])
{
    /* code */
    char firstName[20][10], secondName[20][10];
    char surName[20][10], name[20][20];
    char telePhone[20][10], dummy[20];

    int i,j;

    printf("Input Names and Telephone Numbers:\n");
    printf("?");
    for(i = 0; i<CUSTOMER; i++)
    {
        scanf("%s %s %s %s", firstName[i], secondName[i], surName[i], telePhone[i]);
        /*Converting Full Name to Sur Name with Initials*/
        strcpy(name[i], surName[i]);
        strcat(name[i], ",");
        dummy[0] = firstName[i][0];
        dummy[1] = '\0';
        strcat(name[i], dummy);
        strcat(name[i], ".");

        dummy[0] = secondName[i][0];
        dummy[i] = '\0';
        strcat(name[i], dummy);
    }

    /*Alphabetical ordering of surname*/
    for(i = 0; i<CUSTOMER - 1; i++)
    {
        for(j = 0; j<CUSTOMER - i - 1;i++)
        {
            if(strcmp(name[j], name[j+1])> 0)
            {
                /*Swapping names*/
                strcpy(dummy, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], dummy);

                /*swaping telephone numbers*/
                strcpy(dummy, telePhone[j]);
                strcpy(telePhone[j], telePhone[j+1]);
                strcpy(telePhone[j+1], dummy);
            }
        }
    }

    /*Printing alphabetical list */
    printf("\nCustomer List in Alphabetical Order\n\n");
    for(i = 0; i<CUSTOMER; ++i)
    {
        printf("%-20s\t%-10s\n", name[i], telePhone[i]);
    }
    return 0;
}
