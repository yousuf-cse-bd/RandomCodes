#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    float y1, y2, a, x;
    a = 0.4;
    printf("\t\t\tY----------------->\t\t\t\n");
    printf(" 0 -------------------------------------------\n");
    /*Begenning of the for loop*/
    for(x = 0; x<5; x = x + 0.25)
    {
        y1 = (int) (50 * exp(-a * x)+ 0.5);
        y2 = (int) (50 * exp(-a * x * x * 0.5) + 0.5);
        /*Ploting when y1 == y2*/
        // cout<<y1<<"\t"<<y2<<endl;
        if(y1 == y2)
        {
            // cout<<x<<endl;
            if(x == 2.5)
            printf(" X  |");
            else
            printf("|");
            for(i = 1; i<= y1 - 1; i++)
            printf(" ");

            printf("#\n");
            continue;
        }
        /*Ploting when y1 > y2*/
        if(y1 > y2)
        {
            if(x == 2.5)
            printf(" X |");
            else
            printf("   |");
            for(i = 1; i<=y2 - 1; i++)
            printf(" ");
            printf("*");
            for(i = 1; i<=(y1 - y2 - 1); i++)
            printf("-");
            printf("0\n");
            continue;
        }
        /*Ploting when y2 > y1*/
        if(x == 2.5)
        printf(" X |");
        else
        printf("  |");
        for(i = 1; i<=(y2 - y1 - 1); i++)
        printf("-");
        printf("*\n");
    }   /*End of For Loop*/
    printf("*\n");
    return 0;
}
