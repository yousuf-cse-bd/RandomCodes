#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c, x,y,z;
    int p, q,r;

    printf("Enter Three Integer Numbers:\n");
    scanf("%d %*d %d", &a,&b,&c);
    printf("%d %d %d\n\n", a,b,c);
    printf("Enter two 4-Digit Number:\n");
    scanf("%2d %4d", &x,&y);

    printf("%d %d", x,y);
    printf("Enter two integer:\n");
    scanf("%d %d" , &a, &x);
    printf("%d %d\n\n",a,x);

    printf("Enter the nine digit number:\n");
    scanf("%3d %4d %3d", &p,&q,&r);
    printf("%d %d %d\n\n", p,q,r);
    printf("Enter two digit number:\n");
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
