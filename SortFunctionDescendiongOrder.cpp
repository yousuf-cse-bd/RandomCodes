#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int arr [] = {5, 2, 1, 7, 11, 20, -5, 3, 0,99};
    int lengthArray = sizeof(arr) / sizeof(int);

    cout<<"Array Size: "<<lengthArray<<endl;
    sort(arr, arr+lengthArray, greater<int>());

    for(int item : arr)
    {
        cout<<item<<" ";
    }
    cout<<endl;
    return 0;
}