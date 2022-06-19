#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int i;
    string myString = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(i = 0; myString[i] != '\0'; i++);
    cout<<"Size :"<<i<<endl;
    cout<<"Size of: "<<sizeof(myString)<<endl;
    cout<<myString<<endl;
    int A[] = {5,2,4,3,2,1,0,-1};
    int size = sizeof(A) / sizeof(A[0]);
 
    sort(A, A + size); // Ascending Order
    // for(unsigned int i = 0; i<size; i++)
    // {
    //     cout<<A[i]<<" ";
    // }

    for(int x : A)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    // Descending order
    sort(A, A + size, greater <int>());
    for(int x : A)
    {
        cout<<x<<" ";
    }

    string names [] = {
        "Sumon", "Ashad", "Tamim", "Maruf", "Yousuf", "Ali", "Bangladesh"
    };

    int sizeArray = sizeof(names) / sizeof(string);
    cout<<"\nSize of Array: "<<sizeArray<<endl;
    // Descending order sorting technique in the string array
    sort(names , names + sizeArray, greater <string>());
    cout<<"Sorting thouse Names:"<<endl;
    for(string n : names)
    {
        cout<<n<<endl;
    }

    return 0;
}
