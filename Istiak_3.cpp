#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned totalePageNumber = 60000;
    unsigned aBookNeededPage = 128;

    unsigned div, rem;

    div = totalePageNumber / aBookNeededPage;
    rem = totalePageNumber % aBookNeededPage;

    cout<<"\nYour Answer: "<<div<<" & Xtra Page: "<<rem<<endl; 
    
    return 0;
}
