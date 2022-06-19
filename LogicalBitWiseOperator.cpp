#include <iostream>
using namespace std;

void calculateTheMaximum(int n, int k)
{
    unsigned index = 1;
    int andOperator, orOperator, xorOperator;
    int andResult = 0;
    int orResult = 0;
    int xorResult = 0;
    for(int a = 1 ; a<=n ;a++)
    {
        for(int b = a + 1; b<=n; b++)
        {
            // cout<<index++<<". a = "<<a<<", b = "<<b<<endl;

            andOperator = a & b;
            orOperator = a | b;
            xorOperator = a ^ b;
            if(andOperator < k)
            {
                andResult = andOperator;
            }
            if(orOperator < k)
            {
                orResult = orOperator;
                if(orResult == orOperator) orResult = 0;
                else orResult = orOperator;
            }
            if(xorOperator < k)
            {
                xorResult = xorOperator;
                if(xorResult == xorOperator) xorResult = 0;
                else xorResult = xorOperator;
            }

        }
    }

    cout<<andResult<<"\n"<<orResult<<"\n"<<xorResult<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */

    int n, k;
    n = 5, k = 4;
    calculateTheMaximum(n, k);
    return 0;
}
