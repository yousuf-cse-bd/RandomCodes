#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char character;
    cout<<"Enter a Characther Here: ";
    character = getchar();

    if(isalpha(character)>1)
    {
        cout<<"\nThe Character is A Letter."<<endl;
    }
    if(isdigit(character) == 1)
    {
        cout<<"\nThe Character is A Number."<<endl;
    }
    if(isalnum(character) > 1)
    {
        cout<<"\nThe Character is an Alphanumeric Character.\n";
    }
    if(islower(character)>1)
    {
        cout<<"\nThe Character is Lower Caseed."<<endl;
    }
    if(isupper(character) == 1)
    {
        cout<<"\nThe Character is Upper Cased."<<endl;
    }
    if(isprint(character) > 1)
    {
        cout<<"\nThe Character is Printable."<<endl;
    }
    if(ispunct(character) > 1)
    {
        cout<<"\nThe character is Punctuation."<<endl;
    }
    if(isspace(character) > 1)
    {
        cout<<"\nThe character is space."<<endl;
    }

    cout<<"IsBlank: "<<isblank(' ')<<endl;
    cout<<"IsWhiteSpace: "<<isspace(' ')<<endl;
    cout<<"IsWhite Space: "<<iswspace(' ')<<endl;
    cout<<"Is ASCII: "<<isascii('A')<<endl;

    return 0;
}