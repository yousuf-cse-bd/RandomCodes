#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    n = 9;

    //this is centralized
    for(int i = -n + 1; i<n; i++)
    {
        for(int j = -n + 1; j<n; j++)
        {
            cout<<max(abs(i), abs(j)) + 1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //4 co-ordinates
    for(int i = -n + 1; i<4; i++)
    {
        for(int j = - n + 1; j<4; j++)
        {
            cout<<min(abs(i), abs(j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}
