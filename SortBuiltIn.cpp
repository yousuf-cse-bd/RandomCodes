#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[5];
    for(int i = 0; i<5 ;i++)
    {
        cout<<"Index: "<<i<<"\tItem = ";
        cin>>A[i];
    }

    cout<<endl;
    sort(A, A + 5);
    for(size_t i = 0; i<5 ;i++)
    {
        cout<<"Index: "<<i<<"\tItem = "<<A[i]<<endl;
    }
    
    return 0;
}
