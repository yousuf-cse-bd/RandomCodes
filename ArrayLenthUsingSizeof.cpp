#include <iostream>
using namespace std;

//Not use function to count array size
// int arrayLength(int A[])
// {
//     return (sizeof(A) / sizeof(int));
// }

int main(int argc, char const *argv[])
{
    /* code */

    int arr[] = {1, 2 , 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout<<"Array Size: "<<size<<endl;

    // cout<<"Array Length: "<<arrayLength(arr)<<endl;
    return 0;
}
