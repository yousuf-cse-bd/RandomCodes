#include <iostream>
using namespace std;

int main(void)
{
    int t;
    cout<<"Enter A Positive Value: ";
    cin>>t;
    if(t<0)
    {
        cout<<"Your Entered Value is Negative..!"<<endl;
        return 0;
    }
    while(t--)
    {
       cout<<"T: "<<t<<endl;
    }
    return 0;
}
