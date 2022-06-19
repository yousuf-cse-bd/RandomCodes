#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int i;
    for(i = 1 ; i<=10; i++)
    {
        v.push_back(i);
    }


    cout<<"Capacity: "<<v.capacity()<<endl;
    i = 0;
    while(i != v.size())
    {
        cout<<v[i]<<endl;
        i++;
    }

    return 0;
}
