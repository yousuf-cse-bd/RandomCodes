#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char userPassword[20];
    gets(userPassword);

    if(userPassword[0] >= 'a' && userPassword[0] <= 'z')
    {
        userPassword[0] = userPassword[0] + 'A' - 'a';
    }
    int l = strlen(userPassword);
    userPassword[l] = '.';
    ++l;

    for(int i = 1; i<l;i++)
    {
        if(userPassword[i] == 's')
        {
            userPassword[i] = '$';
        }
        else if (userPassword[i] == 'i')
        {
            userPassword[i] = '!';
        }
        else if (userPassword[i] == 'o')
        {
            ++l;
            for(int j = l; j>i+1; j--) //array position empty one fill
            {
                userPassword[j] = userPassword[j-1];
            }
            userPassword[i] = '('; //default index
            userPassword[i+1] = ')';//new empty index
        }
    
    }

    
    //outPut
    for(int i = 0; i<strlen(userPassword); i++)
    {
        cout<<userPassword[i];
    }
 
    return 0;
}
