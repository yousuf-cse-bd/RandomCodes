#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = 2;
    num = num << 2; ///left shift
    cout<<"Left Shift: "<<num<<endl; 

    num = num >> 2;
    cout<<"Right Shitf: "<<num<<endl;
    return 0;
}
