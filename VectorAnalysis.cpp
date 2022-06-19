#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> V;

    for(int i = 1; i<=10; i++)
    {
        V.push_back(i);
    }
    V.erase(V.begin());
    for(int x : V)
        cout<<x<<" ";
    if(V.size())
        cout<<endl;
    cout<<"Size = "<<V.size()<<endl;

    return 0;
}
