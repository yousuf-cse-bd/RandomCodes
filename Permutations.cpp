#include <iostream>
#include "string"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    string number = "012345";
    int static count;
    sort(number.begin(), number.end());
    
    while (next_permutation(number.begin(), number.end()))
    {
        /* code */
        cout<<"SI: "<<++count<<" = "<<number<<endl;
    }
    
    return 0;
}
