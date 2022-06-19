#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int i;

    cin>>num;
    for(i = 1; i<=num; i++)
    {
        if(num % i == 0)
        {
            cout<<i<<endl;
        } 
    }

    return 0;
}
