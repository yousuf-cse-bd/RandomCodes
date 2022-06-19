#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    // typedef int unit;
    // cout<<"Enter The Unit: ";
    // cin>>unit;
    // cout<<unit<<endl;

    enum day{Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum day week_st, week_end;

    week_st = Monday;
    week_end = Friday;

    cout<<"Start = "<<week_st<<endl;
    cout<<"End = "<<week_end<<endl;

    if(week_st == Tuesday)
    {
        week_end = Saturday;
    }

    // auto int count;
    register char ch;
    static int x;
    extern long total;

    // cout<<"Auto = "<<count<<endl;
    cout<<"Register = "<<ch<<endl;
    cout<<"Static = "<<x<<endl;
    // cout<<"Extern = "<<total<<endl;

    return 0;
}
