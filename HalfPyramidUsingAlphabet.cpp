// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char input, alphabet = 'A';

    
    
    cout<<"Enter the UpperCase Character You Want to Print in the Last Row: ";
    cin>>input;
    if(islower(input)){
        input = toupper(input);
        // cout<<"Input: "<<input<<endl;
    }
    else if(isdigit(input)){
        cout<<"Wrong Input..!\n";
    }else{
        cout<<"Wrong Input..!\n";
    }
    
    for(int i = 1; i<= (input - 'A' + 1); i++)
    {
        for(int j = 1; j<=i ; j++)
        {
            cout<<alphabet<<" ";
        }

        alphabet++;
        cout<<endl;
    }



    return 0;
}
