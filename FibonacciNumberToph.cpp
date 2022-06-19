#include <iostream>
using namespace std;

int fiboncciNumber(int n)
{
    unsigned firstTerm, secondTerm, nextTerm;
    unsigned count = 0;

    firstTerm = 0; 
    secondTerm = 1;

    if(n == 1) return 1;
    else if ( n== 2) return 1;
    else
    {
        for (size_t i = 1; i < n; i++)
        {
            nextTerm = firstTerm + secondTerm;
            // cout<<nextTerm<<" ";
            count++;
            firstTerm = secondTerm;
            secondTerm = nextTerm;

        }
    }
   

    
    return count;
    
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin>>n;
    cout<<fiboncciNumber(n)<<endl;

    return 0;
}
