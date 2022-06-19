#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    unsigned int sum = 0;
    string name;
    cout<<"Enter Your Name: ";
    getline(cin, name);
    int i = 0;
    while (name[i] != '\0')
    {
        if(name[i] == '\n')
        exit(0);
        if(name[i] == ' ')
        {
            // sum = sum -32;
        }
        else
        {
        sum += name[i];
        printf("\nThe ASCII value of the character %c is %d", name[i], name[i]);
        }
        i++;
    }

    cout<<"\nSum of the ASCII value of a string is: "<<sum<<endl;
    
    return 0;
}
