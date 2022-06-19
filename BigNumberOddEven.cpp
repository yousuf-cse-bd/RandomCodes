#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    char n[101];
    cout<<"Enter your number: ";
    cin>>n;

    cout<<"Entered string : "<<n<<endl;

    int num = (int) n[101];
    // num += 49;
    cout<<"Type casting num: "<<num<<endl;

    if(num % 2 == 0) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    return 0;
}
