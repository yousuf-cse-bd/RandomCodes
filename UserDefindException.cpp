#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
    public:
    const char * what() const throw()
    {
        return "Attempted to Divided by Zero\n";
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    int x,y;
    try
    {
        /* code */
        cout<<"Enter two value :\n";
        cin>>x>>y;

        if ( y == 0)
        {
            MyException z;
            throw z;
        }
        else
        cout<<"X / y = "<<x/y<<endl;

    }
    catch(exception & e)
    {
        cout<<e.what();
    }
   
    
    return 0;
}
