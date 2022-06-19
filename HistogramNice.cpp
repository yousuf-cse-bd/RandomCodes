#include <iostream>
using namespace std;

#define N 5

int main(int argc, char const *argv[])
{
    /* code */
    int values[N];
    int i,j,n;
    for(n = 0; n<N; n++)
    {
        cout<<"Enter employee in Gruop- "<<n+1<<": ";
        cin>>values[n];
        cout<<values[n]<<endl;
    }
    for(n = 0; n<N; n++)
    {
        for(i = 1; i<=3; i++)
        {
            if(i == 2)
            cout<<"Group- "<<n+1<<"|";
            else
            cout<<"   \t|";
            for(j = 1; j<=values[n]; j++)
            {
                cout<<"*";
            }
            if(i == 2)
            cout<<"("<<values[n]<<")\n";
            else
            cout<<"\n";
        }
        cout<<"   \t|"<<endl;
    }

    return 0;
}
