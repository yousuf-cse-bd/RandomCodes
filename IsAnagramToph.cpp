#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    string s1, s2;
    cin>>s1>>s2;
    sort(s1.begin(), s1.end());

    while (next_permutation(s1.begin(), s1.end()))
    {
        if(s1 == s2)
        {
            cout<<"Yes"<<endl;
            break;
        }
    }
    if(s1 != s2){
        cout<<"No"<<endl;
    }

    return 0;
}