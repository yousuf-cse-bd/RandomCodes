/****
 * @Author: Muhammad Yousuf Ali
 * @Since: 20 January 2020
 * @Time: 12:19 AM
 */

#include <stdio.h>

int main()
{

    int num1,num2,value;
    char sign;

    printf("Please Enter a Number: ");
    scanf("%d", &num1);

    printf("Enter Another Number: ");
    scanf("%d", &num2);

    value = num1 + num2;
    sign = '+';

    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 - num2;
    sign = '-';

    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 * num2;
    sign = '*';

    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value = num1 / num2;
    sign = '/';

    printf("%d %c %d = %d\n",num1,sign,num2,value);


    return 0;
}