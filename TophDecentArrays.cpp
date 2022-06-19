#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int A[], int n)
{
    for(int i = 0; i<n - 1 ;i ++)
    {
        for(int j = i + 1; j<n; j++)
        {
            if(A[i] > A[j])
            swap(A[i], A[j]);
        }
    }
}

// void bubbleSort(int A[], int n)
// {
//     for(int i = 1; i<n; i++)
//     {
//         for(int j = 0; j<n - i ; j++)
//         {
//             if(A[j] > A[j+1])
//             swap(A[j], A[j+1]);
//         }
//     }
// }

int main(int argc, char const *argv[])
{
    /* code */

    int n;
    bool b = true;
    cin>>n;

    int A[n];
    int B[n];
    for(int i = 0; i<n; i++)
    {
        cin>>A[i];
        B[i] = A[i];
    }

    selectionSort(A, n);

    // bubbleSort(A, n);
    
    for(int i = 0;i<n; i++)
    {
        if(A[i] == B[i])
        b = true;
        else
        b = false;
    }

    if(b == true)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
  
    return 0;
}
