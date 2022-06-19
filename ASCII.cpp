#include <stdio.h> // <cstdio> both valid in C++

int main(void)
{
    for(int i = 0;i!=256;i++)
    {
        printf("%d = %c\n",i,i);
    }
    return 0;
}
