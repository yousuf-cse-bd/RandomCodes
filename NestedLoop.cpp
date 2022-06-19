#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    for(int i = 0; i<5; i++)
    {
        for(int j = i; j<5;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    cout<<"\n\n";
    int num = 5678;
    int rem, div;
    for(int i = 0; i<4; i++)
    {
        for(int j = i; j<4;j++)
        {
           rem = num % 10;
           cout<<rem<<" ";
           num = num / 10;
        }
        cout<<endl;
    }

    return 0;
}
