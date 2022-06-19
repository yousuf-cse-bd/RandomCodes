#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    /* code */
    char javaTpoint[] = "javatpoint";
    int count = 0, length = strlen(javaTpoint);

    for(int i = 0; i<length; i++)
    {
        if(javaTpoint[i] == 'a' || javaTpoint[i] == 'e' || javaTpoint[i] == 'i'
        ||javaTpoint[i] == 'o' || javaTpoint[i] == 'u')
        ++count;

    }
    cout<<"The number of vowels: "<<count<<endl;

    return 0;
}
