#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int firstNum = 101;
    float PI = 3.141590;

    string strNum = to_string(firstNum);
    string strPI = to_string(PI);

    cout<<"The Integer in String: "<<strNum<<endl;
    cout<<"The Floating Point in String: "<<strPI<<endl;

    return 0;
}
