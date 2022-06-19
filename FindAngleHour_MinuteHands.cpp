#include <iostream>
using namespace std;

///This program is solved by anliclock-wise

int main(int argc, char const *argv[])
{
    int hours, minute;
    cout<<"Enter Hour and Minute Values:\n";
    cin>>hours>>minute;
    
    float angleTheeta = (float) (360 - (30 * hours) + (5.5 * minute));
    cout<<"Angle Value: ";
    printf("%.7f\n", angleTheeta);

    return 0;
}
