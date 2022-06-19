#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    array <int, 3> arr1 = {10, 20, 30};
    array <int, 3> arr2 = {51, 52, 52};

    cout<<"Contents of arr1 and arr2 before swap operation:"<<endl;
    cout<<"arr1 = ";
    for(int &i : arr1)cout<<i<<" ";
    cout<<endl;
    cout<<"arr2 = ";
    for(int &i : arr2) cout<<i<<" ";

    arr1.swap(arr2); //Logic
    // swap(arr1, arr2); // support

    cout<<"\nContents of arr1 and arr2 after swap operation:"<<endl;
    cout<<"arr1 = ";
    for(int &i : arr1)cout<<i<<" ";
    cout<<endl;
    cout<<"arr2 = ";
    for(int &i : arr2) cout<<i<<" ";
    return 0;
}
