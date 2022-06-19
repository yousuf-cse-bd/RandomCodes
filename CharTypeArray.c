#include <stdio.h>

int main()
{
    char name[] = {'Y','o','u','s','u','f','\0'};

    puts(name);
    printf("%s", name);

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
