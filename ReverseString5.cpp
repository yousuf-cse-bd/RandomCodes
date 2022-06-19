///Reverse String Using Constructor

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myName = "MuhammadYousufAli";
    string reverseName = string(myName.rbegin(), myName.rend());

    cout<<reverseName<<endl;


    return 0;
}
