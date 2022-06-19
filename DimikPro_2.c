/****
 * @Author: Muhammad Yousuf Ali
 * @Since: TuesDay; 27 September 2019
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T,i;
    char n[101];
    printf("Enter Test Case Value Here: ");
    scanf("%d",&T);
    for(i = 1;i<=T;i++)
    {
        printf("\nEnter Check Value Here: ");
        scanf("%s",n);
        printf("\nEnterd The Value: %s\n", n);

        int num = (int)n[101];

        printf("Num = %d\n",num);
        if(num % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
        
    }

    return 0;
}
