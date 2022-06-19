#include <iostream>
// #include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int shift;
    cin>>shift;
    scanf("\n");
    char plainText[100];
    fgets(plainText, sizeof(plainText), stdin);
    char chipherText;
    for(int i = 0; plainText[i] != '\0'; i++)
    {
        if(plainText[i]  >= 'a' && plainText[i] <= 'z')
        {
            chipherText = (plainText[i] - shift - 'z') % 26 + 'z';
            cout<<chipherText;
        }
        else if(plainText[i]  >= 'A' && plainText[i] <= 'Z')
        {
            chipherText = (plainText[i] - shift - 'Z') % 26+'Z';
            cout<<chipherText;
        }
        else
        cout<<plainText[i];

    }
    return 0;
}
