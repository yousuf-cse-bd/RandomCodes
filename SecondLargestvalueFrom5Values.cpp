/****
 * Second largest value from FIVE values
 * without array or any stl vector
 * and using logical operators
 * 
 */


#include <iostream>
using namespace std;

int main(void)
{

    int n1, n2, n3, n4, n5;
    n1 = 1; 
    n2 = 2;
    n3 = 32;
    n4 = 44;
    n5 = 5;

    if(n1 < n2 && n1 < n3 && n1 < n5)
        cout<<"Second Largest Value: "<<n4<<endl;
    else if(n2 < n3 && n2 < n4 && n2 < n5)
        cout<<"Second Largest Value: "<<n1<<endl;
    else if(n3 < n4 && n3 < n5 && n3 < n1)
        cout<<"Second Largest Value: "<<n2<<endl;


    return 0;
}