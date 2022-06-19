#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[] = {5, 55, 4, 47, 10, 12, 63, 15, 16, 25};
    int size = sizeof(A) / sizeof(int);
    //Selcetion sorting technique
    for(int i = 0; i<size - 1;i++)
    {
        for(int j = i+1; j<10;j++)
        {
            if(A[i]>A[j])
            swap(A[i], A[j]);
        }
    }
    
    for(int x: A)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int anyLargestValue = A[0];
    int chooseLargestValue;
    cout<<"Choise The Largest Value, First, Second and so on: ";
    cin>>chooseLargestValue;

    for(int i = 1; i<size - chooseLargestValue + 1; i++)
    {
        if(anyLargestValue < A[i]){
            anyLargestValue = A[i];
        }
        
    }
    cout<<"Your Chosen Largest Value Here: "<<anyLargestValue<<endl;

    return 0;
}
