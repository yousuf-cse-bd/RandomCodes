/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 14 September 2019
 */


#include <stdio.h>

union myUnion
{
    char c1,c2;
};

int main(int argc, char const *argv[])
{
    int R = 5 / -2;
    printf("%d\n", R);
    int r = 5 % -2;
    printf("%d\n", r);
   union myUnion test;
    //single inilize but multple variable assigning
   test.c1 = 'A';
   printf("%c\n",test.c1);
   printf("%c\n",test.c2);
    return 0;
}
