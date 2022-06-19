#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n;
    cout<<"Enter Nth value here: ";
    cin>>n;

    for(int i = 1; i<=n ; i++)
    {
        for(int j = i + 1; j<=n; j++)
        { 
            cout<<"  ";
        }
        for(int j = 1; j<=n ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
