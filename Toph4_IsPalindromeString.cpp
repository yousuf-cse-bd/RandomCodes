#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char str[100];
    cin>>str;
    string s = strrev(str);
    if(s == str)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
