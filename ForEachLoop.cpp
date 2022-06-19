#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {10, 22, 33, 40, 55};
    cout<<"Using Auto KeyWord: ";
    for (auto x : arr)
        cout << x << " ";
    cout<<"\nUsing ForEach Loop: ";
    for (int x : arr)
    cout<<x<<" ";

    cout<<endl;

    char name[20] = "Yousuf";
    for(auto x : name)
    cout<<x<< " ";

    cout<<endl;
    return 0;
}
