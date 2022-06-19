#include <iostream>
using namespace std;
// Below structure
struct Array
{
    /* data */
    int A[8];
};
// Below stucture type function
struct Array getArray()
{
    struct Array y;
    cout<<"Enter the elements in an array:\n";
    for(int i = 0; i<8; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>y.A[i];
    }
    return y;
}


int main(int argc, char const *argv[])
{
    /* code */

    struct Array x = getArray();
    cout<<"Element that you have entered are:\n";
    for(int i = 0; i != 8; i++)
    {
        cout<<"x.A["<<i<<"] = "<<x.A[i]<<endl;
    }
    return 0;
}
