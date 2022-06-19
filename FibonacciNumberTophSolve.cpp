#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int n[51];
    int i, num;

    cin>>num;
    n[0] = 1;
    n[1] = 1;

    for(i = 2;i<=50; i++)
    {
        n[i] = n[i - 1] + n[i - 2]; 
    }

    cout<<n[num - 1]<<endl;

    return 0;
}
