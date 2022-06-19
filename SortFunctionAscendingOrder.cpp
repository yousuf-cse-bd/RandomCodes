#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int arr [] = {5, 2, 1, 7, 11, 20, -5, 3, 0,99};
    int lengthArray = sizeof(arr) / sizeof(int);

    cout<<lengthArray<<endl;
    sort(arr, arr+lengthArray);

    for(int item : arr)
    {
        cout<<item<<" ";
    }
    cout<<endl;

    string name [] = {"Yousuf", "Muhammad", "Ali", "Maruf", "Tamim"};

    int size = sizeof(name) / sizeof(string);
    cout<<"String Elements Number: "<<size<<endl;

    sort(name, name + size); // Ascending Order
    for(string x : name)
    {
        cout<<x<<endl;
    }

    return 0;
}
