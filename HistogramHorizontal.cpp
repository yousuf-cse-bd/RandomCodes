#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int groupSN = 5;
    int groups[5];
    for(int i = 0; i<groupSN; i++)
    {
        cout<<"Enter employee in Group - "<<i+1<<": ";
        cin>>groups[i];
        cout<<groups[i]<<endl;
    }
    // cout<<"\n|\n";
    for(int i = 0; i < groupSN; i++)
    {
        cout<<"Group-"<<i+1<<"\t|";
        for(int j = 0; j<groups[i]; j++)
        {
            cout<<"*";
        }
        cout<<"("<<groups[i]<<")\n";
    }
    return 0;
}
