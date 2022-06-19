///Calculate Length of String without Using strlen() Function
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str [] = "Muhammad Yousuf Ali";
    int i;
   // scanf("%s",str);
    for(i = 0 ; str[i] != '\0'; ++i);

    printf("String Length :%d\n",i);


    return 0;
}
