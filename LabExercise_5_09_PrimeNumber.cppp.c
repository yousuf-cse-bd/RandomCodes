///Prime Number

#include <stdio.h>
#include <math.h>

int main()
{
    int n,rootSqNum,i;
    short int count = 0;

    printf("Enter A Positive Value Here: ");
    scanf("%d",&n);

    rootSqNum = sqrt(n);

    for(i = 2;i<n ;i++)
    {
        if(n % i == 0)
        {
            count  = 1;
        }
    }

    printf("Count: %d\n",count);
    if(count == 0)
    {
        printf("\n%d is a Prime Number.\n",n);
    }
    else
    {
        printf("\n%d is not Prime Number.\n",n);
    }

    return 0;
}
