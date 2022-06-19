/**
 * @file Union1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
// #pragma pack(1)
union Union1
{
    /* data */
    char ch;
    float b;
    float a;
};


int main(int argc, char const *argv[])
{
    /* code */
    
   union Union1 u;
   printf("Size: %d\n", sizeof(u));
    u.a = 3333333333.586;
    u.b = 5.6;
    u.ch = 'Y';

    printf("%f\n", u.b);
    printf("%c\n", u.ch);
    printf("%f\n", u.a);
    return 0;
}
