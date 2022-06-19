#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char key[] = "mango";
    char buffer[50] = "";

    do
    {
        /* code */

        cout<<"What is your favourite Frute...?: ";
        cin>>buffer;
    } while (strcmp(buffer, key) != 0);
    
    cout<<"Answer is correct."<<endl;

    return 0;
}