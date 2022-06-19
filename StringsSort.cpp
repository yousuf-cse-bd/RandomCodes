#include <iostream>
#include <cstring>
using namespace std;

#define ITEM 5
#define MAXCHAR 20

int main(int argc, char const *argv[])
{
    /* code */
    char myString[ITEM][MAXCHAR] = {
        "London",
        "Manchester",
        "Delhi",
        "Paris",
        "Moscow"
    };
    // char dummy[MAXCHAR];
    int i = 0, j = 0;
    bool swaped = true;

    /*Reading the list*/
    // printf("Enter Name of %d item:\n", ITEM);
    // while(i < ITEM)
    // {
    //     scanf("%s", myString[i++]);
    // }

    /*Traversing the list considering an Array*/
    for(i = 0; i<ITEM; i++)
    {
        for(j = 0; j<MAXCHAR; j++)
        {
            if(myString[i][j] == '\0')
            break;
            cout<<myString[i][j];
        }
        cout<<endl;
    }
    

    /*Sorting Begins Bubble Sort : Ascending order*/
    for(i = 0; i<ITEM -1; i++) /*Outer loop begins*/
    {
        swaped = false;
        for(j = 0; j<ITEM - i -1;j++) /*Inner loop begins*/
        {
            if(strcmp(myString[j], myString[j + 1]) > 0)
            {
                /*Exchange of contents*/
                // strcpy(dummy, myString[j]);
                // strcpy(myString[j], myString[j+1]);
                // strcpy(myString[j+1], dummy);
                swap(myString[j], myString[j+1]); /*It works perfectly*/
                swaped = true;

            }
        } /*Inner loop ends*/
        if(swaped == false)
        break;
    } /*Outer loop ends*/
    /*Sorting Completed */

    printf("\nAlphabetical List\n\n");
    for(i = 0;i<ITEM; i++)
    printf("%s\n", myString[i]);

    return 0;
}
