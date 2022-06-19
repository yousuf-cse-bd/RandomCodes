/*****
 *  Second Largest Value 
 */

#include <iostream>
using namespace std;

int main(void)
{   
    int n1, n2, n3;
    n1 = 5, n2 = 20, n3 = 3;

    if(n2 > n1 && n2 < n3)
    cout<<"N2 = "<<n2<<endl;
    if(n3 < n2 && n3 > n1)
    cout<<"N3 = "<<n3<<endl;
    if(n1< n2 && n1 > n3)
    cout<<"N1 = "<<n1<<endl;

    return 0;
}