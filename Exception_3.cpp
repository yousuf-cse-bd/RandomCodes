#include <iostream>
using namespace std;

int main()
{
    cout<<"Start"<<endl;
    try
    {
        //Start a try block
       cout<<"Inside Try Block"<<endl;
       throw 1000.0; //throw an error
       ///not execute code
       cout<<"This Will Not Execute."<<endl; 
    }
    catch(float i)
    {
        // won't work for an int exception
        cout<<"Cought an Exception-- Value is: "<<i<<endl;
    }
    cout<<"End"<<endl;


    return 0;
}