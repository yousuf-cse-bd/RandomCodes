#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char javaTpoint[] = "javatpoint";
    int count = 0, i = 0;
    while(javaTpoint[i] != '\n') // Warning throuthing '\0' best way
    {
        if(javaTpoint[i] == 'a' || javaTpoint[i] == 'e' || javaTpoint[i] == 'i'
        ||javaTpoint[i] == 'o' || javaTpoint[i] == 'u'){
            ++count;
        }
        i++; // out if
    }
    cout<<"The number of vowels: "<<count<<endl;
    return 0;
}
