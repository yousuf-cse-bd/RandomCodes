#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    float y;

    cout<<"Enter a Floating Point Number: ";
    cin>>x;

    y = x % 10;

    cout<<"Right Most Number: "<<y<<endl;
    return 0;
}
