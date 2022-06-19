#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{

    char S[100];
    cin>>S;

    int i, strSize;
    strSize = strlen(S);
    for(i = strSize - 1; i>=0; i--)
    {
        cout<<S[i];
    }
    cout<<endl;

    return 0;
}
