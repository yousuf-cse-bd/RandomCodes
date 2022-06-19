#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    while (1)
    {
        cout<<"Enter a Character :";
        cin>>ch;

        if(ch == 'x' || ch == 'X')
        {
            return 0;
        }
        else
        {
            cout<<"Entered the Character : "<<ch<<endl;
        }
        
    }
    

    return 0;
}
