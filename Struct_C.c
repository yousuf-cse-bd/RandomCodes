/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 12 September 2019
 */

#include <stdio.h>
#include <string.h>

struct Yousuf
{
    int id,age ;
    char name[10];
};

void display(struct Yousuf ali)
{
    printf("Name: %s\n",ali.name);
}

int main(int argc, char const *argv[])
{
    
    struct Yousuf ali;

    ali.id = 171311101;
    ali.age = 24;

    strcpy(ali.name,"Yousuf");

    printf("ID = %d\n",ali.id);
    printf("Age = %d\n",ali.age); 

    display(ali);   

    return 0;
}

