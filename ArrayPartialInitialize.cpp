#include <iostream>
using namespace std;
// When an automatic array is partially initialized
// the remaining element are initialized to 0
// NB. but array size not declared return GARBAGE Value

// void myFn(int Aa[0], int n)
// {
//     for(int i = n - 1; i>=0; i--)
//     {
//         cout<<Aa[i]<<" ";
//     }
// }
int main(int argc, char const *argv[])
{
    /* code */

    // cout<<sizeof(void)<<endl; // 1 but error

    int A[5] = {2, 3};
    for (unsigned int i = 0; i < 5; i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }

    cout<<"\n";
    
    int B[] = {2, 3};
    for (unsigned int i = 0; i < 5; i++)
    {
        cout<<"B["<<i<<"] = "<<B[i]<<endl;
    }
    

    // int array[] = {1,2, 3 , 4, 5};
    // int n = sizeof(array) / sizeof(int);
    // cout<<"\nn = "<<n<<endl;

    // myFn(array, n);

    float f = 2.25;
    printf("%e\n", f);
    printf("%f\n", f);
    printf("%g\n", f);
    printf("%lf\n", f);
    cout<<f<<endl;
    
    return 0;
}
