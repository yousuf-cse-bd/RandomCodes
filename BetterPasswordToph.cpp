#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string userPassword;
    cin>>userPassword;

    userPassword[0] = towupper(userPassword[0]);
    // if (userPassword[0] >= 'a' && userPassword[0] < 'z')
    // {
    //     userPassword[0] = userPassword[0] + 'A' - 'a';
    // }
    
    int l = userPassword.length();
    // userPassword[l] = '.';
    cout<<userPassword[0]<<endl;

    for(int i = 1; i<l; i++)
    {
        if(userPassword[i] == 'i')
        {
            userPassword[i] = '!';
        }
        else if (userPassword[i] == 's')
        {
            userPassword[i] = '$';
        }
        else if (userPassword[i] == 'o')
        {
            l ++;
            for(int j = l; j> i + 1; j--)
            {
                userPassword[j] = userPassword[j-1];
            }
            userPassword[i] = '(';
            userPassword[i+1] = ')';
        }
        // else
        // continue;       
        
    }

    for(int i = 0; i<l; i++)
    {
        cout<<userPassword[i];
    }
    cout<<".";
    
    
    return 0;
}
