#include <iostream>
using namespace std;

int main()
{
    int kase;
    cin>>kase;
    for(int i = 1; i<=kase; i++)
    {
        string name;
        cout<<"Enter Your Name: ";
        getline(cin, name);

        cout<<"Your Name: "<<name<<endl;
    }

    return 0;
}