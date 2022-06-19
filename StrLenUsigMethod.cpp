#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char str[100];
    while(1)
    {
        cout<<"Enter a String Here: ";
        cin>>str;
        if(str == "\n") ///Does not work till
        {
            return 0;
        }
        else
        {
             int l = strlen(str);
             cout<<"Length: "<<l<<endl;
        }

    }



    return 0;
}
