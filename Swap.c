/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Swap: Call by Refference**** 
 */

#include <stdio.h>

void design(int n)
{
    int i;
    for( i = 0;i!=35;i++)
    {
        printf("=");
    }
    printf("\n");
}
///Using tempurary variable
void swap2(int *x ,int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
///without tempurary variable
void swap1(int *x, int *y)
{
    *x = *x ^ *y; //+
    *y = *x ^ *y; //-
    *x = *x ^ *y; //-
}

int main(void)
{
    int firstValue = 15;
    int lastValue = 10;

    printf("Befor Swaping:\n First Value: %d\tLast Value: %d\n", firstValue,lastValue);

    int option;
   
    do
    { 
        design(35);
         printf("1 for Call First Function_1\n");
         printf("2 for Call Second Function_2\n");
         printf("0 for EXIT...!\n");
         design(35);
         printf("\nEnter Your Option Here: ");
         scanf("%d", &option);
       switch (option)
       {
           case 0:
           printf("***EXIT MAN***");
            break;
       case 1:
           swap1(&firstValue,&lastValue);
           printf("After Swaping:\n First Value: %d\tLast Value: %d\n", firstValue,lastValue);
           printf("First Function END.\n");
           break;
        case 2:
        swap2(&firstValue,&lastValue);
        printf("After Swaping:\n First Value: %d\tLast Value: %d\n", firstValue,lastValue);
        printf("Second Function END.\n");
            break;
       default:
        printf(":::Select the Right Option:::\n");
           break;
       } 
    } while (option!=0);
    
    
    return 0;
}