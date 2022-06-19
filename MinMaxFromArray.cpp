#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"A["<<i<<"] = ";
        cin>>A[i];
    }

    int mx, mn;
    mx = mn = A[0];

    for(int i = 1; i<n; i++)
    {
        mx = max(mx, A[i]);
        mn = min(mn, A[i]);
    }

    cout<<"Max Value: "<<mx<<endl;
    cout<<"Min Value: "<<mn<<endl;
    cout<<"MimValue + MaxValue = "<<mn + mx<<endl;

    return 0;
}
