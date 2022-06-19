#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int count, negative;
    double number, sqroot;
    cout<<"Enter 9999 to Stop...!"<<endl;
    count = 0;
    negative = 0;
    while (count <= 100)
    {
        /* code */
        cout<<"Enter a number: ";
        cin>>number;

        if(number == 9999)
        break;
        if(number < 0)
        {
            cout<<"Number is Negative."<<endl;
            negative++;
            continue;
        }
        sqroot = sqrt(number);
        cout<<"Number = "<<number<<"\nSquare Root = "<<sqroot<<endl;
        count++;
    }
    cout<<"Number of items done = "<<count<<endl;
    cout<<"Negative Items = "<<negative<<endl;
    cout<<"END OF DATA"<<endl;
    
    return 0;
}
