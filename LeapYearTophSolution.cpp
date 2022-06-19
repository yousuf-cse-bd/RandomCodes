#include <iostream>
using namespace std;
//Wrong solution and definition
int main(int argc, char const *argv[])
{
    /* code */

    int year;
    cin>>year;

    if(year % 4 == 0 && year % 400 != 0)
    cout<<"Yes\n";
    else
    cout<<"No\n";

    return 0;
}
