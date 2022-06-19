#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int *a = new int(10); // int opbject assign in ponter of a
    float *b = new float(9.8); // float object assign in pointer of b
    char *c = new char('Y'); // char object assign in pointer of c
    double *d = new double(*b); // double object in pointer of d but value of b

    printf("*a = %d\n", *a);
    printf("*b = %f\n", *b);
    printf("*c = %c\n", *c);
    printf("*d = %lf\n", *d);

    // pointer type array size of 5
    cout<<"Enter your 5 item here: "<<endl;
    int *A = new int[5];
    for(int i = 0; i<5; i++)
    cin>>A[i]; //*(A + i) can be replaced by A[i]

    cout<<"Your Item:\n";
    for(int i = 0; i<5; i++)
    // cout<<*(A + i)<<endl;
    cout<<A[i]<<endl;//*(A + i) can be replaced by A[i]
    //new syntax
    int *p = new int();
    *p = 20;
    cout<<"*p = "<<*p<<endl;

    return 0;
}
