#include <iostream>
using namespace std;

int main()
{
    long long n,i,sum = 0;
    cin>>n;
    for(i = 1 ; i<=n;i++)
    {
        cout<<i<<" ";
        sum += i;
    }

    cout<<"\nSum of Them = "<<sum<<endl;

    return 0;
}
