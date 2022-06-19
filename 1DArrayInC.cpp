#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
    /* code */
    system("cls");

    int n;
    cout<<"Enter Nth value here: ";
    cin>>n;
    int* A = (int*)malloc(n * sizeof(int));
    for(int i = 1; i<=n;i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    int sum = 0;
    cout<<"\n";
    for(int i = 1; i<=n ;i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
        sum += A[i];
    }

    cout<<"Sum of them: "<<sum<<endl;


    return 0;
}
