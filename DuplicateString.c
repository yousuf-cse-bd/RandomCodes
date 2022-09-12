/**
 * @file DuplicateString.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Create duplicate string
 * @version 0.1
 * @date 2022-09-12
 * @since MonDay; 03:16 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Existing function definition*/
// char *strdup(const char *s){
//     char *cntrl;
//     if(cntrl = malloc(strlen(s))){
//         strcpy(cntrl, s);
//     }
//     return cntrl;
//     free(cntrl);
// }

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    char name[10], *name1;
    printf("Enter string to duplicate: ");
    scanf("%s", name);
    /*Here is not compareing operator, just assignment operator*/
    if(name1 = strdup(name)){
        printf("Duplicate string: %s\n", name1);
    }else{
        printf("Sorry, there is an error occure..!\n");
    }
    return 0;
}
