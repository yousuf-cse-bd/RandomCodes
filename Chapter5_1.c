#include <stdio.h>

int main()
{
    double x,y, x_pls_y,x_minus_y;

    printf("Enter the value of X + Y: ");
    scanf("%lf", &x_pls_y);

    printf("Enter the value of X - Y: ");
    scanf("%lf", &x_minus_y);

    x = (x_pls_y + x_minus_y) / 2;
    y = (x_pls_y - x_minus_y) / 2;

    printf("x = %0.2lf, y = %0.2lf\n", x,y);


    return 0;
}