#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a Number String: ";
    cin>>s;
    stringstream myFnc(s);
    int x = 0;
    myFnc>>x;
    cout<<"Entered String: "<<x<<" Now Integer"<<endl;

    return 0;
}
