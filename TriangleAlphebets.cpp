#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n = 10;
    int i,j;
    for(i = 64+n ;i>=65;i--)
    {
        for(j = 65 ; j<=i;j++)
        {
            printf("%c ",j);
        }
        cout<<endl;
    }

  return 0;
}
