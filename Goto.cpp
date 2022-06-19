#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1;

    top:
    {
        cout<<i<<endl;
        i++;
        if(i<=10){
            goto top;
        }
    }
    cout<<"End\n";

    return 0;
}
