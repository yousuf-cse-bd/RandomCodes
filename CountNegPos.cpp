#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    unsigned countNeg = 0;
    unsigned countPos = 0;

    int num;

    while (true)
    {
        /* code */
        cin>>num;
        if(num>0)
        countPos++;
        if(num<0)
        countNeg ++;
        if(num == 0)
        break;
    }

    cout<<"Positive Number: "<<countPos<<" in Number."<<endl;
    cout<<"Negative Number: "<<countNeg<<" in Number."<<endl;
    
    return 0;
}
