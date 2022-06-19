#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int index = -1;
    for(int i = 0; i<5; i++)
    {
        if(i == 3)
        {
            index = 10;
            cout<<"I = "<<i<<"\tIndex = "<<index<<endl;
        }
        else if(i==2)
        {
            index = 20;
            cout<<"I = "<<i<<"\tIndex = "<<index<<endl;
        }
        else
        {
            cout<<"I = "<<i<<"\tIndex = "<<index<<endl;
        }
    }
    return 0;
}
