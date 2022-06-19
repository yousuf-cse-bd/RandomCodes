#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int anArray[] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 0};
    int sizeOperator = sizeof(anArray) / sizeof(int);
    cout<<sizeOperator<<endl;

    int sizeManual, uppperBound, lowerBound;
    uppperBound = 10;
    lowerBound = 0;

    sizeManual = uppperBound - lowerBound + 1;
    cout<<sizeManual<<endl;
    (sizeOperator == sizeManual) ? cout<<"Equal\n" : cout<<"!Equal"<<endl;



    return 0;
}
