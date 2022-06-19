#include <iostream>
#include <cmath>
#define LAMDA 0.001
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    
    double t;
    float r;
    int i, R;

    for(i = 1; i<=27; i++)
    {
        printf("--");
    }
    printf("\n");

    for(t = 0;t <= 3000; t+= 150)
    {
        r = exp(-LAMDA*t);

        R = (int) (50*r+0.5);
        printf(" |");

        for(i = 1; i<= R; i++)
        {
            printf("*");
        }
        printf("#\n");

    }

    // float f = exp(1);

    // cout<<f<<endl;

    // float d = 3.14159;

    // printf("%g\n", d);
    // printf("%f\n", d);

    // cout<<d<<endl;
    return 0;
}
