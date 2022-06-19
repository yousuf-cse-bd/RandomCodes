#include <iostream>
using namespace std;

int main(void)
{
    int m,n,i;
    n = 5;
    m = 0;
    for(i = 1 ;i<=10;i++)
    {
        m = m + n;
        cout<<n<<" x "<<i<<" = "<<m<<endl;
    }

    return 0;
}