#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    // string name = "*Yousuf";
    // int l = name.length();

    // for(int i = 0; i<l; i++)
    // {
    //     char ch = name.at(i);
    //     if(isalnum(ch)){
    //         cout<<"IsAlNum Yes\n";
    //         continue;
    //     }
    //     break;

    // }

    char * userName = getenv("USER");
    cout<<userName<<endl;

    return 0;
}
