#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    char line[] = "101 5 -6 8 88 9 10";

    unsigned count = 1;
    for(int i = 0; i != 19; i++)
    {
        if(line[i] == ' ')
        {
            count ++;
            // cout<<"Counter = "<<count<<endl;
        }
    }

    cout<<count<<endl;

    cout<<line<<endl;
    return 0;
}
