#include <iostream>
using namespace std;

int main()
{
    cout<<"Start"<<endl;
    try
    {
        //Start a try block
       cout<<"Inside Try Block"<<endl;
       throw 1000; //throw an error
       ///not execute code
       cout<<"This Will Not Execute."<<endl; 
    }
    catch(int i)
    {
        //catch an error
        cout<<"Cought an Exception-- Value is: "<<i<<endl;
    }
    cout<<"End"<<endl;


    return 0;
}