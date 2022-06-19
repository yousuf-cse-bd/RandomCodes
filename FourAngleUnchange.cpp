#include <iostream>
using namespace std;

int main()
{
    int i,j;


    for(i = 0;i<6;i++)
    {
        for(j = 0;j<6;j++)
        {
            if(i>0&&i<6-1 || j>0&&j<6-1)
            {
                cout<<" 0 ";
            }
            else
            {
                cout<<" 1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}

