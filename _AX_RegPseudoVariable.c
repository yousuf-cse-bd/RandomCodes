#include <stdio.h>

int main()
{
    /* code */

    int a = 15, b = 10, c = 5;
    if(a < b  < c) // a < b return false,  false<c return TRUE
    printf("True\n");
    else
    printf("False\n");

    int A = sizeof(A);
    printf("%d\n", A);// 4 bytes;

    // a = modify(a);
    // printf("%d\n", a);
    return 0;
}
// int modify(int x)
// {
//     int y = 3;
//     _AX = x + y;
//     return;
// }