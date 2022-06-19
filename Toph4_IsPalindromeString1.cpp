#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;
    string revString = str;
    //revese method is void type
    reverse(revString.begin(), revString.end());

    if(str == revString)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
