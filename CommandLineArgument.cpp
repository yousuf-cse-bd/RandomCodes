#include <iostream>
using namespace std;

// void parameterize(int a)
// {
//     cout<<"This is a function***"<<endl;
// }

int main(int argc, char const *argv[])
{
    /* code */
    cout<<"argc = "<<argc<<endl;
    // parameterize(argc);
    cout<<"\nProgram Name is: "<<argv[0]<<endl;
    if(argc < 2)
    cout<<"No Argument passed through command line."<<endl;
    else
    cout<<"First Argment is: "<<argv[1]<<endl;
    return 0;
}
