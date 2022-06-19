#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n, newItem, i;
    cout<<"Enter Nth Value Here: ";
    cin>>n;
    int A[n];
    for(i = 0; i<n; i++)
    {
        cout<<"A["<<i<<"]: ";
        cin>>A[i];
    }

    int position;
    cout<<"Enter the Position where Deletion an Item: ";
    cin>>position;
    if(position > n)
    {
        cout<<"Overflow the Array Sized...!"<<endl;
        exit(0);
    }
    else
    {
        for(i = position; i<n; i++)
        {
            A[i] = A[i+1];
        }

        int N = sizeof(A) / sizeof(int);
        // cout<<N<<endl;
        for(i = 0; i<N-1; i++)
        {
            cout<<"A["<<i<<"]: "<<A[i]<<endl;
        }
    }


    return 0;
}