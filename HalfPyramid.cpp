#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");

    int n;
    cout<<"Enter Row: ";
    cin>>n;

    for(int i = 0; i<=n; i++)
    {
        for(int j = 1; j<=n; j++) //more efficiency for printing space 
        {
            if(j <= n - i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
