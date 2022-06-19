#include <iostream>
using namespace std;

int main()
{   
    int a = 2, b = 3;
    if(a == 2)
    {
        if(b == 3)
        {
            cout<<"insideTrue"<<endl;
        }
        cout<<"outsideTrue"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    ///Another Process

    if(a == 2 && b == 3)
    {
        cout<<"Must True***"<<endl;
    }
    else
    {
        cout<<"False...!"<<endl;
    }

    return 0;
}