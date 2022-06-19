#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */

    int A[3] = {1,2,3};
    int B[3] = {11,22,33};

    swap(A, B);
    for(int a : A)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    for(int b : B)
    {
        cout<<b<<" ";
    }
    return 0;
}
