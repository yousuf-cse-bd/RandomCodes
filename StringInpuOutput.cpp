#include <iostream>
using namespace std;

void cCode()
{
    char line[100];
    cout<<"Enter Your Line Here: ";
    gets(line);
    cout<<"Enterd Your Line: "<<line<<endl;
}

void cppCode()
{
    cout<<"C++"<<endl;
    string line;
    cout<<"Enter Your Line Here: ";
    getline(cin, line);
    cout<<"Enterd Line: "<<line<<endl;
}
int main(int argc, char const *argv[])
{
    /* code */
    int kase;
    cout<<"Enter Case Value Here: ";
    cin>>kase;
    for(int i = 1; i<=kase; i++)
    {
        // cCode();
        cout<<"Case: "<<i;
        cppCode();

    }
    return 0;
}
