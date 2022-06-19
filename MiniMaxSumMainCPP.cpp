#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long V[5], s = 0;
    for(int i = 0; i<5 ;i++)
    {
        cin>>V[i];
        s = s + V[i];
    }

    sort(V, V+5);
    
    cout<<s - V[4]<<" "<<s - V[0]<<endl;
    return 0;
}
