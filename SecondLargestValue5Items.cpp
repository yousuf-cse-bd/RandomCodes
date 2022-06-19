////Second largest value from 5 item without array
#include <iostream>
using namespace std;

int main(void)
{
    int n1, n2, n3, n4, n5;

    n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5;

    if(n4 < n5 && n4 > n1 && n4 > n2 && n5 > n3)
    cout<<"N4 = "<<n4<<endl;
    if(n3 > n4 && n3 < n5 && n3>n1 && n3>>n2)
    cout<<"N3 = "<<n3<<endl;
    if(n2 > n3 && n2 > n4 && n2 > n1 && n2 < n5)
    cout<<"N2 = "<<n2<<endl;
    if(n1 > n2 && n1 >> n3 && n1 > n4 && n1 < n5)
    cout<<"N1 = "<<n1<<endl;
    if(n5 > n1 && n5 >> n2 && n5>n3 && n5 < n4)
    cout<<"N5 = "<<n5<<endl;

    return 0;
}