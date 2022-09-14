/**
 * @file StructuredMemberAsPointer.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Structured Members as Pointer Variable (GNU not support)
 * @version 0.1
 * @date 2022-09-14
 * @since WednesDay; 10:32 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <stdio.h>
#include <string.h>
#pragma pack(1)

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    struct Student{
        /* data */
        char *name;
        char *deptName;
        int *id;
        float *cgpa;
    };
    struct Student yousuf, *me;
    me = &yousuf;
    int roll = 171311101;
    float result = 3.35;

    strcpy(yousuf.name, "Md. Yousuf Ali");
    strcpy(yousuf.deptName,"Computer Science & Engineering");
    yousuf.id = &roll;
    yousuf.cgpa = &result;

    printf("%s\t%s\t%d\t%f", yousuf.name, *yousuf.id, yousuf.deptName, *yousuf.cgpa);
   
    return 0;
}
