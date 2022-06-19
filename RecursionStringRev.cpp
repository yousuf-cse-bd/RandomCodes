#include <iostream>
using namespace std;

//Recursion Function String Reverse
void reverse( string s)
{
    if(s.length() == 0)
    return;

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(int argc, char const *argv[])
{
    /* code */

    string name = "yousuf";
    reverse(name);
    cout<<endl;
    // cout<<"Name: "<<name[5]<<endl;
    // cout<<"Name 1:"<<name[6]<<endl;
    for(int i = name.length() - 1; i>=0; i--)
    {
        cout<<i<<" = "<<name[i]<<endl;
    }
    cout<<endl;
    return 0;
}
