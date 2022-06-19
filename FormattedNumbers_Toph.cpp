//Read an integer variable and print it in which the digits are separated into groups of three by commas.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string input;
    cin>>input;
    for(int i = input.size() - 3; i>0; i = i - 3)
    {
        input.insert(input.begin() + i, ',');
    }

    cout<<input<<endl;

    
    return 0;
}

