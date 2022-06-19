#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char colors[4][10];

    for(int i = 0; i<4; i++)
    {
        cout<<"Enter Your Value Here: ";
        cin>>colors[i];
    }
    
    cout<<"Using For-Each-Loop: ";
    for(string colours : colors)
    {
        cout<<colours<<" ";
    }

    cout<<"\nUsing Just For-Loop: ";
    for(int i = 0; i<4; i++)
    {
        cout<<colors[i]<<" ";
    }

    return 0;
}
