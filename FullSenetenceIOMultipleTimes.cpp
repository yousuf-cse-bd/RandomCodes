#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    for(int i = 1; i<=5; i++)
    {
        cout<<"Enter Your Name Here: ";
        getline(cin, name);
        cout<<"Entered Name: "<<name<<endl;
    }
    
    return 0;
}
