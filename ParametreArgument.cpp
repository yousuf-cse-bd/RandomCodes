#include <iostream>
using namespace std;

int myMethod(int n){
    return ++n; //prefix, increment
}

int main(int argc, char const *argv[])
{
    
    cout<<myMethod(5)<<endl;


    return 0;
}
