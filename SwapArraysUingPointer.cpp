#include <iostream>
using namespace std;

/*Swaps two arrays using pointer*/
void swapUsingPointer(int *arr1, int * arr2, int n)
{
    int i, tmp;
    for(i = 0; i < n ;i++)
    {
        tmp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = tmp;
    }
    return;
}

int main(int argc, char const *argv[])
{
    /* code */

    int *arr1, *arr2, i, j, n;
    /*Get the order of the arrays from the user*/
    cout<<"Enter the order of the arrays: ";
    cin>>n;

    /*Dynamically allocate memory to store elements*/
    arr1 = (int*) malloc(n*sizeof(int));
    arr2 = (int*) malloc(n*sizeof(int));

    /*Input element for first arrays*/
    cout<<"Enter data for first arrays:\n";
    for(i = 0; i<n; i++)
    {
        cout<<"Array1["<<i<<"]: ";
        scanf("%d", (arr1 + i));
    }

    /*Input element for second arrays*/
    cout<<"Enter data for second arrays:\n";
    for(i = 0; i<n; i++)
    {
        cout<<"Array2["<<i<<"]: ";
        scanf("%d", (arr2 + i));
    }
    cout<<endl;
    /*Swap the elements in the given arrays*/
    swapUsingPointer(arr1, arr2, n);
    cout<<"Print the elements in the first array:"<<endl;
    for(int i = 0; i<n ; i++)
    {
        cout<<*(arr1 + i)<<" ";
    } 

    cout<<"\nPrint the element in the second array:"<<endl;
    for(int i = 0; i<n ; i++)
    {
        cout<<*(arr2 + i)<<" ";
    }

    // Bellow codes also supports thanks
   /* int n;
    cout<<"Enter Nth value here: ";
    cin>>n;
    int A[n], B[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];

        cout<<"B["<<i<<"] = ";
        cin>>B[i];
    }

    cout<<"*****Before swap*****"<<endl;
    cout<<"A = ";
    for(int a : A) cout<<a<<" ";
    cout<<"\nB = ";
    for(int b : B) cout<<b<<" ";

    swapUsingPointer(A, B, n);
    cout<<"\n\n*****After swap*****"<<endl;
    cout<<"A = ";
    for(int a : A) cout<<a<<" ";
    cout<<"\nB = ";
    for(int b : B) cout<<b<<" ";*/
    return 0;
}
