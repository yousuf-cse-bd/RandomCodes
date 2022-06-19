#include <iostream>
using namespace std;

string moveCharX(string s)
{
    if(s.length() == 0)
    return "";

    char x = s[0];
    string ans =  moveCharX(s.substr(1));

    if(x == 'x')
    return (ans + x);
    else
    return (x + ans);

}

int main(int argc, char const *argv[])
{
    /* code */

    cout<<moveCharX("xabacxxbdle")<<endl;
    return 0;
}
