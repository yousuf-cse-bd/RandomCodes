#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int hour, minute;
    cin>>hour>>minute;

    double angle = ((11/2.0 * minute) - (30*hour)) + 360;
    if(angle < 360 - angle) {
        printf("%.7lf\n", angle);
    }
    else {
        printf("%.7lf\n",360 - angle);
    }
    return 0;
}


