#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    char const *colors[4] = {"Black", "White", "Blue", "Green"};

    cout<<"Using Normal For-Loop Printout:\n";
    for(int i = 0; i<4; i++)
    {
        cout<<colors[i]<<", ";
    }

    cout<<"\n\nUsing For-Each-Loop:\n";
    for(string s : colors)
    {
        cout<<s<<", ";
    }
    cout<<endl;

    const char *name = "MuhammadYousufAli";
    cout<<"\nName: "<<name<<endl;

    for(int i = 0; i<17; i++)
    {
        cout<<name[i]<<" ";
    }
    return 0;
}
