#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int size; //variable declaration
    cout<<"Enter Array Size: "; //User message
    cin>>size; //input the array size

    int *A = new int[size]; //creating an array but[notNormalArray]

    // cout<<"Array Size: "<<sizeof(*A)<<endl;
    for(int i = 1; i<=size; i++) //[0] index not mandatory
    {
        cout<<"Index: "<<i<<"\t\tItem = ";
        cin>>A[i];
    }

    // A[size + 20] = 100; //valid 
    // cout<<"Last: "<<A[size + 20]<<endl;

    //OutPut the array
    for(int i = 1; i<=size; i++)
    cout<<A[i]<<" ";

    cout<<endl;

    delete A; //Deleting an existing array


    return 0;
}
