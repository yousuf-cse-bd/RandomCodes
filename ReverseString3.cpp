#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myName = "MuhammadYousufAli";
    int i,n;
    n = myName.length();

    for(i = n - 1; i>=0; i--)
    {
        cout<<myName[i];
    }
    cout<<endl;

    return 0;
}
