/****
 * @Author: Muhammad Yousuf Ali
 * @Since: MonDay, 13 July 2020
 * ***Vector Basic:2**** 
 * Number Constanst: Numeric Values
 */

#include <stdio.h>

int main()
{
    int number = 0101; //invalid first digit 0;
    printf("%d\n", number);

    float f1 = 1.; //valid
    printf("%f\n",f1);

    float f2 = 0.; //valid
    printf("%f\n",f2);

    float f3 = 2E2 ; //valid, 2E2 == 2*10^2 == 200
    printf("%f\n",f3);

    float f4 = 2e-3; //valid
    printf("%f\n",f4); 

    float f5 = .12121212e12 ; //valid
    printf("%f\n",f5);  

    printf("%dBytes\n", sizeof(f5));   
    return 0;
}