#include <stdio.h>

int main()
{
    int Arr[] = {1,2,3,4,5,6,7,8,8,9,10};

    printf("%d\n",Arr[0]);
    int size = sizeof(Arr) / sizeof(int);

    putchar('\n');
    for(int i = 0; i!=size ; i++)
    {
        printf("%d ", Arr[i]);
    }
    putchar('\n');
    // for(int x : Arr)
    // {
    //     printf("%d ", x);
    // }
    return 0;
}