///Write own reverse function by swapping characters:

#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();

    for(int  i = 0; i<n/2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

int main()
{
    string str = "MuhammadYousufAli";

    reverseStr(str);
    cout<<str<<endl;

    return 0;
}
