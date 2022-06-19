#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int Arr[] = {10, 20, 30, 40, 50};
    int Arr[5];
    ///normal for loop
    for(int i = 0; i<5; i++)
    {
        Arr[i] = i;
    }

    cout<<"Size of the Array: "<<sizeof(Arr)<<endl;

    ///C++ consists for-each loop
    for(int x:Arr)
    {
        cout<<x<<endl;
    }
    return 0;
}
