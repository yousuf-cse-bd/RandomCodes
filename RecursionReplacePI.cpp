#include <iostream>
using namespace std;

void piReplace(string s)
{
    if (s.size() == 0)
        return;

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        piReplace(s.substr(2));
    }
    else
    {
        cout << s[0];
        piReplace(s.substr(1));
    }
}

int main(int argc, char const *argv[])
{
    /* code */

    string str = "pippxxppiixipi";
    piReplace(str);

    // substring()
    cout << endl;
    string name = "YOUSUF";
    for (int i = 0; i < name.length(); i++)
        cout << name.substr(i) << endl; // sub string operation cuting frome main string to new small string

    return 0;
}
